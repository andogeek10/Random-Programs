#include <iostream>
using namespace std;
void swapped(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void even_swap(int* arr,int array_size)
{
    for (int i=0;i<(array_size-1);i+=2)
    {
        swapped(arr[i],arr[i+1]);
    }
    cout<<endl<<"The rearranged array is :"<<endl;
    for (int i=0;i<array_size;++i)
        cout<<arr[i]<<"\t";
}
int main()
{
    int array_size;
    cout<<endl<<"Enter the size of the array :";
    cin>>array_size;
    int *arr =new int [(array_size-1)];
    cout<<endl<<"Enter the array elements :"<<endl;
    for (int i=0;i<array_size;++i)
        cin>>arr[i];
    even_swap(arr,array_size);
    return 0;
}
