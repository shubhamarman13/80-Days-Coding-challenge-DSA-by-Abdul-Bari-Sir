#include<iostream>
using namespace  std;
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int A=10;
    int B=20;
    cout<<"********Before swap******** "<<endl;
    cout<<"X= "<<A<<endl<<"Y= "<<B<<endl;
    swap(A,B);
    cout<<"********Before swap******** "<<endl;
    cout<<"X= "<<A<<endl<<"Y= "<<B;
}