#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"I am virtual  function of the base class "<<endl;

    }
};
class derived : public base 
{
public:
void  show() override 
{
    cout<<"i am virtual function of the derived class "<<endl;
}

};
int main()
{ 
    // this is the simplese way to access the both method indivisually 
    // base obj;
    // derived obj1;
    // obj.show();
    // obj1.show();

    // accessing using the pointer of the base class
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->show(); 
    ptr->base::show();
}