#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int* p;
    p= (int *)malloc(5*sizeof(int));   // dynamic memory allocatio of array  in C programming 
    // for c++ the above line of code can be written as below
    // p= new int[5];    dynamic memory allocation in c++ programming 
    p[0]=22;
    p[1]=23;
    p[2]=24;
    p[3]=25;
    p[4]=26;

for (int i = 0; i <5 ; i++)
{
    cout<<p[i]<<endl;
}

}