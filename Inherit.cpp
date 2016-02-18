#include <iostream>
#include <stdio.h>
using namespace std;
class BOOK
{
    char bookname[100];
    int no_of_pages;
    char author[100];
public :
    void ReadB()
    {
        cout<<endl<<"Enter the book name :";
        gets(bookname);
        cout<<"Enter the author :";
        gets(author);
        cout<<"Enter the number of pages :";
        cin>>no_of_pages;
    }
    void displayB()
    {
        cout<<endl<<"Book name :"<<bookname;
        cout<<"Author :"<<author;
        cout<<"Number of pages :"<<no_of_pages;
    }
};
class student
{
    char name[100];
    int age;
    BOOK b;
public:
     void readData()
    {
        cin.ignore();
        cout<<endl<<"Enter your name :";
        gets(name);
        cout<<"Enter your age :";
        cin>>age;
    }
    void display()
    {
        cout<<endl<<"Name :"<<name;
        cout<<endl<<"Age :"<<age;
    }
};
class EQUIPMENT
{
    char name[100];
    char role[100];
public:
    void ReadEquip()
    {
        cin.ignore();
        cout<<"Enter the name of the equipment :";
        gets(name);
        cout<<"Enter the role of the equipment :";
        gets(role);
    }
    void Display()
    {
        cout<<endl<<"Name of the equipment :"<<name;
        cout<<"Role of the equipment :"<<role;
    }
};
class PrimaryStudent : public student
{
    char Activity[100];
    float no_of_hrs;
public :
    void ReadPrimary()
    {
        readData();
        cin.ignore();
        cout<<"Enter your activity :";
        gets(Activity);
        cout<<"Enter the number of hours :";
        cin>>no_of_hrs;
    }
    void DisplayPrimary()
    {
        display();
        cout<<endl<<"Activity :"<<Activity;
        cout<<endl<<"Number of hours :"<<no_of_hrs;
    }
};
class SecondaryStudent : public student
{
    EQUIPMENT e;
};
int main()
{
    PrimaryStudent P;
    P.ReadPrimary();
    P.DisplayPrimary();
    return 0;
}
