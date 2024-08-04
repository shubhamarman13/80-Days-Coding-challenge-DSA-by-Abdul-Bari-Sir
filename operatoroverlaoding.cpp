#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()=0;
};
class B : public A
{
public:
void show() 
{
    cout<<"this is the show function"<<endl;
}
};
class C : public A
{

void show() 
{
    cout<<"this is the show function of class C "<<endl;
}
};
int main()
{

A *obj;
B obj2;
C obj3;
obj=&obj2;
obj->show();
obj=&obj3;
obj->show();
}