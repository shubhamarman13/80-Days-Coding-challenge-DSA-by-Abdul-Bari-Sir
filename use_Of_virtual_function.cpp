#include<iostream>
using namespace std;
// this is the code for crating the multiple overrinding of the function by the concept of the virtual function
class grandfather
{
    public:
    virtual void fun()
    {
        cout<<"I am the grandfather "<<endl;
    }
};
class father : public grandfather
{
 void fun() override
 {
    cout<<"I am father"<<endl;
 }
};
class son : public father
{
    void fun() override
    {
        cout<<"I am the child or you can say i am the son "<<endl;
    }
};

int main()
{
grandfather *obj;
father obj2;
son obj3;
obj= &obj3;
obj->fun();

}