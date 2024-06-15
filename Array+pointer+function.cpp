#include<iostream>
using namespace std;
void fun(int *arr)
{
    cout<<sizeof(arr)/sizeof(int)<<endl;
}
int main()
{
    int arr[]={2,3,4,5,6,7};
    fun(arr);
    cout<<sizeof(arr)/sizeof(int);

}