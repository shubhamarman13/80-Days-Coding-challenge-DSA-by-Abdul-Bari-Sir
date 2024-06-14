#include<iostream>
using namespace std;
struct Reactangle 
{
    int length;
    int breath;
};
int main()
{
    Reactangle r1;
    r1.length=33;
    r1.breath=22;
    Reactangle *p;
    p=&r1;
    Reactangle *ptr= new Reactangle;
    ptr->length=21;ptr->breath=11;cout<<endl<<"Value of static pointer "<<endl;

    cout<<p->length<<endl<<p->breath;
    cout<<endl<<"value of Dynamic pointer "<<endl;
    cout<<ptr->length<<endl<<ptr->breath;
    return 0;
}