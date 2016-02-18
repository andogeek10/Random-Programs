#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<endl<<"Enter the size of the array :";
    cin>>a;
    int *r=new int [a];
    cout<<"Enter the elements -"<<endl;
    for (int i=0;i<a;++i)
        cin>>r[i];
    cout<<"Enter the digit to be deleted :";
    cin>>b;
    int c;
    for (int i=0;i<a;++i)
    {
        if (r[i]==b)
        {
          for (int j=i;j<a;++j)
                r[j]=r[j+1];
        }
    }
    for (int i=0;i<a-1;++i)
        cout<<r[i]<<", ";
    return 0;
}
