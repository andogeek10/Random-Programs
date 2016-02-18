#include <iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*start,*rear,*temp,*ptr,*np;
Node* create(int in)
{
    ptr=new Node;
    ptr->info=in;
    ptr->next=nullptr;
    return ptr;
}
void insert(Node* np)
{
    if (start==nullptr)
        start=rear=np;
    else
    {
        rear->next=np;
        rear=np;
    }
}
void display(Node* start)
{
    while (start!=nullptr)
    {
        cout<<start->info<<"->";
        start=start->next;
    }
    cout<<"NULL";
}
void del(int in)
{
    if (start==nullptr)
        cout<<endl<<"No elements";
    else
    {
        ptr=start;
        while (ptr!=nullptr)
        {
            temp=ptr->next;
            if (temp->info==in)
            {
                ptr->next=temp->next;
                break;
            }
            ptr=ptr->next;
        }
        delete temp;
    }
}
int main()
{
    int in;
    char ch;
    start=nullptr;
    do {
            cout<<endl<<"Enter the integer :";
            cin>>in;
            np=create(in);
            if (np==nullptr)
            {
                cout<<endl<<"The process is dead Jim.";
                return 1;
            }
            else
                insert(np);
            display(start);
            cout<<endl<<"Wanna continue?";
            cin>>ch;
    }while (ch=='y');
    cin>>in;
    del(in);
    display(start);
    return 0;
}
