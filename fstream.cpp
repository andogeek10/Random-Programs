#include <fstream>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void menu()
{
    cout<<endl<<"Select the corresponding number :"<<endl;
    cout<<"1. Count number of occurrences of a letter"<<endl;
    cout<<"2. Count number of lines starting with a particular letter"<<endl;
    cout<<"3. Transfer all vowels to 'Target.txt' "<<endl;
    cout<<"4. Count number of articles 'a', 'an' or 'the' in the file"<<endl;
    cout<<"5. Count number of lines starting with 'The'"<<endl;
    cout<<"Enter your choice :";
}
void count_letter(fstream& access)
{
    char l,t;
    int i=0;
    cout<<endl<<"Enter the letter to be counted for :";
    cin>>t;
    access.clear();
    access.seekg(ios::beg);
    while (access.get(l)!=nullptr)
    {
        if (l==t)
            i++;
    }
    cout<<endl<<"The number of occurrences are :"<<i;
}
void count_lines(fstream& access)
{
    char l[100],t;
    int i=0;
    cout<<endl<<"Enter the letter to be counted for :";
    cin>>t;
    access.clear();
    access.seekg(ios::beg);
    while (access.getline(l,99,'.')!=nullptr)
    {
        if (l[1]==t||l[0]==t)
        {
            i++;
        }
    }
    cout<<endl<<"The number of occurrences are :"<<i;
}
void vowel(fstream& access)
{
    char l;
    ofstream out;
    out.open("Target.txt");
    access.clear();
    access.seekp(ios::beg);
    while (access.get(l)!=nullptr)
    {
        if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
        {
            out<<l<<" ";
        }
    }
    out.close();
    ifstream in;
    in.open("Target.txt");
    cout<<endl<<"The new file has been created with the following content :"<<endl;
    while (in.get(l)!=nullptr)
    {
        cout<<l;
    }
    in.close();
}
void articles(fstream& access)
{
    char l[100];
    int i=0;
    access.clear();
    access.seekg(ios::beg);
    while (access>>l!=nullptr)
    {
        if (strcmp(l,"a")==0 || strcmp(l,"A")==0)
            i++;
        else if (strcmp(l,"an")==0 || strcmp(l,"An")==0)
            i++;
        else if (strcmp(l,"the")==0 || strcmp(l,"The")==0)
            i++;
    }
    cout<<endl<<"The number of occurrences are :"<<i;
}
void the_lines(fstream& access)
{
    char l[100];
    int i=0;
    access.clear();
    access.seekg(ios::beg);
    while (access.getline(l,99,'.')!=nullptr)
    {
        if (l[1]=='T'&&l[2]=='h'&&l[3]=='e' || l[0]=='T'&&l[1]=='h'&&l[2]=='e')
        {
            i++;
        }
    }
    cout<<endl<<"The number of occurrences are :"<<i;
}
int main()
{
    int choice=0;
    char cont;
    fstream access;
    access.open("Source.txt", ios::in | ios::out);
    do {
            menu();
            cin>>choice;
            switch (choice)
            {
                case 1 : count_letter(access);
                         break;
                case 2 : count_lines(access);
                         break;
                case 3 : vowel(access);
                         break;
                case 4 : articles(access);
                         break;
                case 5 : the_lines(access);
                         break;
               default : cout<<endl<<"A wrong choice has been entered";
                         break;
            }
            cout<<endl<<"Anymore operations to be performed?";
            cin>>cont;
    } while (cont=='y'||cont=='Y');
    return 0;
}
