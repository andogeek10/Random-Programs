#include <iostream>
#include <stdio.h>
#include <math.h>
class Account
{
    char name[100];
    long acc_no;
    float open_bal;
protected :
    void acc_input()
    {
        cout<<endl<<"Enter your name :";
        gets(name);
        cout<<endl<<"Enter your account number :";
        cin>>acc_no;

    }

};
