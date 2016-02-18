#include <iostream>
#include <stdio.h>
using namespace std;
struct Node
{
    char name[20];
    int age;
    Node *Link;
}*temp;
class queue
{
    Node *rear,*front;
public :
    queue()
    {
        front=rear=nullptr;
    }
    void queins();
    void quedel();
    void display();
};
void queue::queins()
{
    temp=new Node;
    cin.ignore();
    cout<<endl<<"Enter the name :";
    gets(temp->name);
    cout<<"Enter the age :";
    cin>>temp->age;
    temp->Link=nullptr;
    if (front==nullptr)
        front=rear=temp;
    else
    {
        rear->Link=temp;
        rear=temp;
    }
}
void queue::quedel()
{
    if (front==nullptr)
        cout<<endl<<"Underflow";
    else
    {
        temp=front;
        front=front->Link;
        delete temp;
    }
}
void queue::display()
{
    temp=front;
    cout<<endl<<"The queue is :"<<endl;
    while (temp!=nullptr)
    {
        cout<<temp->name<<"  "<<temp->age<<"-->";
        temp=temp->Link;
    }
    cout<<"NULL";
}
int main()
{
    queue q;
    char choice;
    int ch;
    do {
            cout<<"Menu"<<endl<<"1. Enter"<<endl<<"2. Delete"<<endl<<"Choose :";
            cin>>ch;
            switch(ch)
            {
                case 1 : q.queins();
                         q.display();
                         break;
                case 2 : q.quedel();
                         q.display();
                         break;
                default: cout<<endl<<"Wrong choice";
                          break;
            }
            cout<<endl<<"Do you want to continue?";
            cin>>choice;
    }while (choice=='y'||choice=='Y');
    return 0;
}
