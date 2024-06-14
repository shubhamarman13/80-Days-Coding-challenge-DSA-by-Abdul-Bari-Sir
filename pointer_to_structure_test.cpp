#include<iostream>
using namespace std;
struct Rectangle
{
int length;
int breath;
};
int main()
{
    cout<<"HI";
    struct  Rectangle *r1;
    r1= new Rectangle;
   int l= r1->length=20;
   int b= r1->breath=10;
    cout<<"Area= "<<l*b;
}