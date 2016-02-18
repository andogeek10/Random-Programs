#include <iostream>
using namespace std;
int main()
{
    int l,r;
    cout<<endl<<"Enter array size:";
    cin>>l;
    cin>>r;
    int *a=new int [l+r];
    for (int i=0;i<l;++i)
        cin>>a[i];
    int temp,j;
    for (int i=0;i<r;++i)
    {
        temp=a[l-1];
        for (j=l-1;j>=0;--j)
        {
           a[j+1]=a[j];
        }
        a[0]=temp;
    }
    cout<<endl;
    for (int i=0;i<l;++i)
        cout<<a[i]<<"  ";
    return 0;
}
