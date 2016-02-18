#include <iostream>
#include <stdio.h>
using namespace std;
class String {
                char sen[200];
                char co[200];
            public :
                void input();
                void output();
                void rev();
                void cop();
                void concat();
};
void String::input()
{
    cout<<endl<<"Enter a string :";
    gets(sen);
}
void String::output()
{
    cout<<"String :"<<sen;
}
void String::rev()
{
    int len=0;
    char temp[200];
    for (len=0;sen[len]!='\0';++len);
    len--;
    for (int i=0;i<=len;++i)
    {
        temp[i]=sen[len-i];
    }
    temp[len+1]='\0';
    for (int i=0;i<=len;++i)
    {
        sen[i]=temp[i];
    }
    cout<<endl<<"String :"<<sen;
}
void String::cop()
{
    int i;
    for (i=0;sen[i]!='\0';++i)
    {
        co[i]=sen[i];
    }
    co[i]='\0';
    cout<<endl<<"String has been copied :"<<co;
}
void String::concat()
{
    int a=0,b=0;
    cout<<endl<<"Enter string 1 :";
    gets(sen);
    cout<<endl<<"Enter string 2 :";
    gets(co);
    for (a=0;sen[a]!='\0';++a);
    for (b=0;co[b]!='\0';++b);
    if (a+b>199)
    {
        cout<<"These two strings can not be concatenated.";
    }
    else
        for (int i=0;i<a+b;++i)
        {
            sen[i+a]=co[i];
        }
    cout<<"Concatenated string :"<<sen;
}
int main()
{
    String S1;
    S1.input();
    S1.output();
    S1.rev();
    S1.cop();
    S1.concat();
    return 0;
}
