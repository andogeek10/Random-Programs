#include <iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<endl<<"1 :";
    cin>>r1>>c1;
    cout<<endl<<"2 :";
    cin>>r2>>c2;
    int *a1=new int [r1*c1];
    int *a2=new int [r2*c2];
    int *a3=new int [r1*c2];
    for (int i=0;i<(r1*c1);++i)
        cin>>a1[i];
    for (int i=0;i<(r2*c2);++i)
        cin>>a2[i];
    for (int i=0;i<r1;++i)
    {
        for (int j=0;j<c2;++j)
        {
            a3[i*c2+j]=0;
            for (int k=0;k<c1;++k)
            {
                a3[i*c2+j]+=a1[i*c1+k]*a2[k*c2+j];
            }
        }
    }
    cout<<endl<<endl;
    for (int i=0;i<(r1*c2);++i)
    {
        if (i%c1==0)
            cout<<endl;
        cout<<a3[i]<<"  ";
    }
    return 0;
}
