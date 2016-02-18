#include <iostream>
#include <stdio.h>
using namespace std;
class Result {
                float marks[5];
                char name[100];
                float avg;
                char grade;
                void grad(float,int);
            public:
                void input(int);
                void average(float *, int);
                void output(int);
}Stu[20];
void Result::input(int i)
{
        cout<<endl<<"Enter the name of student "<<(i+1)<<" :";
        gets(Stu[i].name);
        for (int j=0;j<5;++j)
        {
            cout<<"Enter marks of subject "<<(j+1)<<" :";
            cin>>Stu[i].marks[j];
            do{
                if(Stu[i].marks[j]>100)
                {
                    cout<<"Your marks can not be greater than 100."<<endl;
                    cout<<"Enter marks of subject "<<(j+1)<<" :";
                    cin>>Stu[i].marks[j];
                }
            }while(Stu[i].marks[j]>100);
           cin.ignore();
        }
        Stu[i].average(Stu[i].marks,i);
}
void Result::average(float marks[],int i)
{
      Stu[i].avg=0;
      for (int j=0;j<5;++j)
        {
            Stu[i].avg+=Stu[i].marks[j];
        }
        Stu[i].avg=Stu[i].avg/5;
        grad(Stu[i].avg,i);
}
void Result::grad(float avg,int i)
{
    if (avg>90)
        Stu[i].grade='A';
    else if (avg>80)
        Stu[i].grade='B';
    else if (avg>70)
        Stu[i].grade='C';
    else if (avg>60)
        Stu[i].grade='D';
    else if (avg>=50)
        Stu[i].grade='E';
    else if (avg<50)
        Stu[i].grade='F';
}
void Result::output(int i)
{

        cout<<endl<<endl<<"Name of the student "<<(i+1)<<" :";
        puts(Stu[i].name);
        for (int j=0;j<5;++j)
        {
            cout<<"Marks of subject "<<(j+1)<<" :";
            cout<<Stu[i].marks[j]<<endl;
        }
        cout<<endl<<"Average of student "<<(i+1)<<" :"<<Stu[i].avg;
        cout<<endl<<"Grade of student "<<(i+1)<<" :"<<Stu[i].grade;
}
int main()
{
    for (int i=0;i<20;++i)
    {
        Stu[i].input(i);
    }
    for (int i=0;i<20;++i)
    {
        Stu[i].output(i);
    }
    return 0;
}
