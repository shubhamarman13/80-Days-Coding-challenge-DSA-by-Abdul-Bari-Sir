// in this programm we are asking the user to enter the size of the aray and dynamically we are assigning the to the elements in the array which is being allocated the memeory  dynamiclay 

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
delete []arr; // this line is for freeing the sapce which we have ocupied in the heap 


}