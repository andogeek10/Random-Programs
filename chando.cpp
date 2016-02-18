#include <iostream>
#include <math.h>
int main()
{
    int N,a=0,c;
    std::cin>>N;
    for (int i=1;i<=N && i<=7000;++i)
    {
        c=pow(5,i);
        if (c%5==0)
        a*=i;
    }

    std::cout<<a;
    return 0;
}
