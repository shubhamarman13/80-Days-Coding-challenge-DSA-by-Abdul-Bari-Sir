#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={20,10,24,20,10,13,11,30};
    int size1= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size1);
    int * new_end= unique(arr,arr+size1);
    int last= new_end- arr;
    for (int  i = 0; i < last; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}