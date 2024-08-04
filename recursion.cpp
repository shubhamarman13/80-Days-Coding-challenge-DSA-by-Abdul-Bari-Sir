#include<iostream>
using namespace std;
void Add(int x)
{if (x>0)
{
    Add(x-1);
    cout<<x<<endl;
}
}
int main()
{
  int x=3;
  Add(3);
}