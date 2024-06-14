#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // int x = 10;
    // int *p = &x;
    // // cout<<p<<endl;
    // // cout<<*p<<endl;
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // int arr[5]={2,3,4,6,8};
    int*p ;
    // p=(int*)malloc(5*sizeof(int));
    p= new int[5];
    p[0]=19;
    p[1]=13;
    p[2]=14;
    p[3]=44;
    p[4]=188;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    
    
    return 0;
}