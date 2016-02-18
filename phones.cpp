#include <fstream>
#include <stdio.h>
#include <iostream>
using namespace std;
class Phone
{
    char Phoneno[10];
    int Calls;
public:
    void Get()
    {
        cin.ignore();
        gets(Phoneno);
        cin>>Calls;
    }
    void Billing()
    {
        cout<<Phoneno<<"#"<<Calls<<endl;
    }
    int GetCalls()
    {
        return Calls;
    }
};
int main()
{
    int i=0;
    fstream p;
    p.open("phones.dat", ios::out | ios::in | ios::app | ios::binary);
    Phone ph[6];
    while(i<6)
    {
        ph[i].Get();
        p.write((char*)&ph[i],sizeof(Phone));
        i++;
    }
    i=0;
    p.seekg(0);
    while (p.read((char*)&ph[i],sizeof(Phone))!=nullptr)
    {
        if(ph[i].GetCalls()>=800)
        {
            ph[i].Billing();
        }
        i++;
    }
    p.close();
    return 0;
}
