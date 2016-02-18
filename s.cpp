#include <iostream>
using namespace std;
int fact(int a)
{
    int n=1;
    for (int i=a;i>0;--i)
    {
        n=n*i;
    }
    return n;
}
int main()
{
    int a,b,c,d,e;
    for (int i=1;i<1000000;++i)
    {
        d=i;
        b=0;
        do {
            a=d%10;
            b += fact(a);
            d=d/10;
        }while(d!=0);
        if (b==i)
        {
            cout<<i<<", ";
        }
    }
    return 0;
}
