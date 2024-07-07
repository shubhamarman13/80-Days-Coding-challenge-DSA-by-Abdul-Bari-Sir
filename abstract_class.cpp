#include<iostream>
using namespace std;
//  In this we are creating a abstract class in which we are going to create the pure virtual funtion and there are two classes a base class and derived class and in the base  class we are goiong to create the pure virtual function and in the derived class we are  going to override the pure virtual function and we can not create the object of base class as it is abstract class and the rule  is that pure virtual function must be override in the derived class other wise both the (derived and the base ) will be consider as abstract class and we cam not crate the object of any  of the class that it :)
class sound 
{
    public:
    virtual void speak()=0;
};
class dog: public sound
{
public:
void speak()
{
    cout<<"dog barks.... "<<endl;
}

};
class cat : public sound
{
public:
void speak()
{
cout<<"Cat sounds like mewwwww mewwwwwww"<<endl;
}

};
int main()
{
   
   sound *obj;
   dog obj2;
   obj=&obj2;
   obj->speak();
   cat obj3;
   obj=&obj3;
   obj->speak();
  
}
/*
MAIN DIFFRENCE BW VIRTUAL FUNCCTION AND PURE VIRTUAL FUNCTION 
Key Differences
Implementation in Base Class:

Virtual Function: Can have an implementation in the base class.
Pure Virtual Function: Has no implementation in the base class; it is declared with = 0.
Instantiation of Base Class:

Virtual Function: The base class can be instantiated if it contains only virtual functions (with or without implementations).
Pure Virtual Function: The base class cannot be instantiated; it is considered an abstract class.
Requirement in Derived Classes:

Virtual Function: Derived classes may override the virtual function, but it is not mandatory.
Pure Virtual Function: Derived classes must override the pure virtual function; otherwise, they will also be considered abstract classes and cannot be instantiated.
*/