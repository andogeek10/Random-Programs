#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct MyNode
{
    float num;
    MyNode *Link;
}*start,*rear,*ptr;
void create(float no)
{
    ptr=new MyNode;
    ptr->num=no;
    ptr->Link=nullptr;
}
void insertend()
{
    if (start==nullptr)
        start=rear=ptr;
    else
    {
        rear->Link=ptr;
        rear=ptr;
    }
}
void deleteq()
{
    if(start==nullptr)
    {
        cout<<endl<<"Underflow";
        return;
    }
    else
    {
        cout<<endl<<"Deleted element :"<<start->num;
        ptr=start;
        start=start->Link;
        delete ptr;
    }
}
void display()
{
    cout<<endl<<"The queue -"<<endl;
    ptr=start;
    while(ptr!=nullptr)
    {
        cout<<ptr->num<<" -> ";
        ptr=ptr->Link;
    }
    cout<<"NULL";
}
int main()
{
    start=rear=nullptr;
    float no;
    char choice;
    do {
            cout<<"Enter the number :";
            cin>>no;
            create(no);
            if (ptr==nullptr)
            {
                cout<<endl<<"Failed to initialize node";
                return -1;
            }
            insertend();
            display();
            cout<<endl<<"Do you want to add more elements?";
            cin>>choice;
            cin.ignore();
    }while(choice=='Y'||choice=='y');
    cout<<endl<<"Do you want to delete elements?";
    cin>>choice;
    while (choice=='Y'||choice=='y')
    {
        deleteq();
        display();
        cout<<endl<<"Do you want to delete more elements?";
        cin>>choice;
    }
    return 0;
}

