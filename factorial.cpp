#include<iostream>
using namespace std;
int fact=1;
double factorial(int x)
{
    if (x==1)
    {
        return 1;
    //    factorial(x-1); 
    }
    // return fact;
    else
    {

       return x*factorial(x-1);
    }
}
int main()
{
    int num;
    cout<<"Enter the number to  find the factorial"<<endl;
    cin>>num;
    cout<<factorial(num);

}