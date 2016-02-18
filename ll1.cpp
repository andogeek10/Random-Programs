#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Node
{
    int Bno;
    char Title[20];
    Node *Link;
}*top,*ptr,*temp;
void create(char name[],int no)
{
    ptr=new Node;
    ptr->Bno=no;
    strcpy(ptr->Title,name);
    ptr->Link=nullptr;
}
void pushbook()
{
    if (top==nullptr)
        top=ptr;
    else
    {
        temp=top;
        top=ptr;
        top->Link=temp;
    }
}
void popbook()
{
    if(top==nullptr)
    {
        cout<<endl<<"Underflow";
        return;
    }
    else
    {
        cout<<endl<<"Deleted book :"<<top->Bno<<"\t"<<top->Title;
        ptr=top;
        top=top->Link;
        delete ptr;
    }
}
void display()
{
    cout<<endl<<"The stack -"<<endl;
    ptr=top;
    while(ptr!=nullptr)
    {
        cout<<"Book Number :"<<ptr->Bno<<"  "<<"Title :"<<ptr->Title<<" -> ";
        ptr=ptr->Link;
    }
    cout<<"NULL";
}
int main()
{
    top=nullptr;
    int no;
    char name[20],choice;
    do {
            cout<<endl<<"Enter the title of the book :";
            gets(name);
            cout<<"Enter the number of the book :";
            cin>>no;
            create(name,no);
            if (ptr==nullptr)
            {
                cout<<endl<<"Failed to initialize node";
                return -1;
            }
            pushbook();
            display();
            cout<<endl<<"Do you want to add more books?";
            cin>>choice;
            cin.ignore();
    }while(choice=='Y'||choice=='y');
    cout<<endl<<"Do you want to delete books?";
    cin>>choice;
    while (choice=='Y'||choice=='y')
    {
        popbook();
        display();
        cout<<endl<<"Do you want to delete more books?";
        cin>>choice;
    }
    return 0;
}
