#include<iostream>
using namespace std;
struct complex
{
int real ;
int imaginary;
};


int main()
{
    struct complex c1={3,4};
    struct complex c2={2,5};
    cout<<"Sum of two complex numbers are : "<<c1.real+c2.real <<" + "<<c1.imaginary+c2.imaginary<<"i"<<endl;
}