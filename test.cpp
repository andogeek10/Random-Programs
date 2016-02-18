#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int *p;
    cin>>i;
    p= new(nothrow) int [i];
    for (n=0;n<i;++n)
        cin>>p[n];
    for (n=0;n<i;++n)
        cout<<"\t"<<p[n];
    delete[] p;
    return 0;
}
