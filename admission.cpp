#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
class ADMISSION {
                    int AD_NO;
                    char NAME[100];
                    char CLASS;
                    float FEES;
                public :
                    void Read_Data();
                    void Display();
                    void Draw_Nos();
}s[20];
void ADMISSION::Read_Data()
{
    cout<<endl<<"Enter your name :";
    gets(NAME);
    cout<<"Enter your admission number :";
    cin>>AD_NO;
    cout<<"Enter your class section :";
    cin>>CLASS;
    cout<<"Enter your fee amount :";
    cin>>FEES;
    cin.ignore();
}
void ADMISSION::Display()
{
    cout<<endl<<"Name :"<<NAME<<endl;
    cout<<"Admission number :"<<AD_NO<<endl;
    cout<<"Class section :"<<CLASS<<endl;
    cout<<"Fee amount :"<<FEES;
}
void ADMISSION::Draw_Nos()
{
    int a=0,b=0,c=0;
    srand(time(NULL));
    for (int i=0;i<2;++i)
    {
        a=(rand()%1991)+10;
        b=0;
        c=0;
        do{
            if (a==s[b].AD_NO)
            {
                s[b].Display();
                c++;
            }
            b++;
            if (b==20)
            {
                a=(rand()%1991)+10;
                b=0;
            }
        }while (c!=1);
    }
}
int main()
{
    for (int i=0;i<20;++i)
    {
        s[i].Read_Data();
    }
    s[0].Draw_Nos();
    return 0;
}
