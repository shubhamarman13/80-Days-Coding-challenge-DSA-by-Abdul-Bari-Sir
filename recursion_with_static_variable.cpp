#include<iostream>
using namespace std;
int fun(int n)
{
    static int x=0;
    if (n>0)
    {
        x++;

        return fun(n-1)+x;
        cout<<n*8<<endl; 

    }
    return 0;

}
int main()
{

int a=8;
cout<<fun(a);
return 0;
}
