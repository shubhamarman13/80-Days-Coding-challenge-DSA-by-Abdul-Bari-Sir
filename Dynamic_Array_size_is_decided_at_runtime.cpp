#include<iostream>
using namespace std;
int *Array(int size)
{
    int *ptr;
    ptr= new int[size];
    cout<<"Enter the elements "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }
    cout<<endl<<"****************************"<<endl;
    return ptr;
}
int main()
{
int *arr , size;
cout<<"Enter the size that you want in the dynamic Array"<<endl;
cin>>size; 
arr=Array(size);
cout<<endl<<"****************************"<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<endl;
}
delete []arr;


}