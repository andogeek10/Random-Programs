#include<iostream>
#include<stdio.h>
#define size_array 200
using namespace std;
int top=-1;
char stack[size_array];
int push(char a)
{
    if (top!=(size_array-1))
    {
        top++;
        stack[top]=a;
    }
    else
        return -1;
    return 0;
}
char pop()
{
    char r;
    if (top!=-1)
    {
        r=stack[top];
        top--;
    }
    else
        return NULL;
    return r;
}
int main()
{
    char a[size_array],b;
    int j=0,check=0,c;
    cout<<endl<<"Enter the string :";
    gets(a);
    for (;a[j]!='\0';++j);
    for (int i=0;i<j;++i)
    {
        if (a[i]!=' ')
            c=push(a[i]);
        if (c==-1)
        {
            cout<<endl<<"Overflow";
            return -1;
        }
    }
    for (int i=0;i<j;++i)
    {
        if (a[i]!=' ')
            if (a[i]!=pop())
                check++;
    }
    if (check==0)
        cout<<endl<<"Entered string \""<<a<<"\" is a palindrome";
    else
        cout<<endl<<"Entered string \""<<a<<"\" is not a palindrome";
    return 0;
}
