#include <iostream>
#include <stdio.h>
using namespace std;
struct Examinee
{
    long RollNo;
    char Name[20];
    float Score;
};
void input(Examinee* ex,int size)
{
    for (int i=0;i<size;++i)
    {
        cout<<"Examinee "<<(i+1)<<" -"<<endl;
        cout<<"Enter roll number :";
        cin>>ex[i].RollNo;
        cin.ignore();
        cout<<"Enter name :";
        gets(ex[i].Name);
        cout<<"Enter score :";
        cin>>ex[i].Score;
        cout<<endl;
    }
}
void swapped(int a,int b,Examinee* ex)
{
    Examinee temp;
    temp=ex[a];
    ex[a]=ex[b];
    ex[b]=temp;
}
void sort(Examinee* ex,int size)
{
    for (int i=0;i<size;++i)
    {
        for (int j=0;j<(size-1)-i;++j)
            if (ex[j].Score<ex[j+1].Score)
                swapped(j,j+1,ex);
    }
}
void output(Examinee* ex,int size)
{
    for (int i=0;i<size;++i)
    {
        cout<<"Roll number :"<<ex[i].RollNo<<endl;
        cout<<"Name :"<<ex[i].Name<<endl;
        cout<<"Score :"<<ex[i].Score<<endl;
    }
}
int main()
{
    int size;
    cout<<endl<<"Enter the number of examinees :";
    cin>>size;
    Examinee *ex = new Examinee [size-1];
    cout<<"Enter the details :"<<endl;
    input(ex,size);
    sort(ex,size);
    cout<<endl<<"The sorted array is :"<<endl;
    output(ex,size);
    delete[] ex;
    return 0;
}
