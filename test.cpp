#include<iostream>
using namespace std;
struct Rectangle 
{
int length;
int breath;
};
int Area(struct Rectangle &r2)
{
    cout<<"Enter the length"<<endl;
    cin>>r2.length;
    cout<<"Enter the breath"<<endl;
    cin>>r2.breath;
return r2.breath*r2.length;
}
int main()
{
 struct Rectangle r;
 cout<<Area(r)<<endl;
 cout<<r.length;
}