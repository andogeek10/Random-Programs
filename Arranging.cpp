#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void swaps(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int a[10][10],b,c;
    int *d,*e;
    //cout<<"Enter the number of rows :";
    //cin>>b;
    //cout<<"Enter the number of columns :";
    //cin>>c;
    d=&b;
    e=&c;
    b=3;
    c=6;
    srand(time(NULL));
    for (int i=0;i<*d;++i)
    {
        for (int j=0;j<*e;++j)
            a[i][j]=rand()%10;
    }
    for (int i=0;i<*d;++i)
    {
        cout<<"\n";
        for (int j=0;j<*e;++j)
            cout<<"\t"<<a[i][j];
    }
    for (int i=0;i<*d;++i)
    {
        for (int j=0;j<*e;++j)
        {
            for (int k=0;k<*d;++k)
            {
                for (int l=0;l<*e;++l)
                {
                    if (a[i][j]<a[k][l])
                    {
                        swaps(a[i][j],a[k][l]);
                    }
                }
            }
        }
    }
    cout<<"\n";
    for (int i=0;i<*d;++i)
    {
        cout<<"\n";
        for (int j=0;j<*e;++j)
            cout<<"\t"<<a[i][j];
    }
    return 0;
}
