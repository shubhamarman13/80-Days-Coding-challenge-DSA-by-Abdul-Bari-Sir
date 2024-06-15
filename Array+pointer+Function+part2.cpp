#include<iostream>
using namespace std;
void Fun(int *A,int size)
{
    A[0]=200;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    Fun(arr,n);
    cout<<arr[0]; 

}