#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Travel
{
    char T_Code[20];
    int No_of_Adults;
    int No_of_Children;
    int Distance;
    float TotalFare;
public:
    Travel()
    {
        strcpy(T_Code,"NULL");
        No_of_Adults=0;
        No_of_Children=0;
        Distance=0;
        TotalFare=0;
    }
    void AssignFare();
    void EnterTravel();
    void ShowTravel();
};
void Travel::AssignFare()
{
    if (Distance>=1000)
        TotalFare=500;
    else
        if (Distance<1000 && Distance>=500)
            TotalFare=300;
    else
        if (Distance<500)
            TotalFare=200;
    TotalFare=((TotalFare*No_of_Adults) + ((TotalFare/2)*No_of_Children));
}
void Travel::EnterTravel()
{
    cout<<endl<<"Enter your travel code :";
    gets(T_Code);
    cout<<"Enter the number of adults :";
    cin>>No_of_Adults;
    cout<<"Enter the number of children :";
    cin>>No_of_Children;
    cout<<"Enter the distance to be traveled :";
    cin>>Distance;
    AssignFare();
}
void Travel::ShowTravel()
{
    cout<<endl<<"Travel code :"<<T_Code;
    cout<<endl<<"Number of adults :"<<No_of_Adults;
    cout<<endl<<"Number of children :"<<No_of_Children;
    cout<<endl<<"Distance to be traveled :"<<Distance;
    cout<<endl<<"Total fare :"<<TotalFare;
}
int main()
{
    Travel t;
    t.EnterTravel();
    t.ShowTravel();
    return 0;
}
