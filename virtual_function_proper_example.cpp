#include<iostream>
using namespace std;
class sound 
{
    public:
    virtual void speak()
    {
        cout<<"I am base class "<<endl;

    }
};
class dog: public sound
{
public:
void speak()
{
    cout<<"dog barks.... "<<endl;
}
void callbase()
{
    sound::speak();
}
};
class cat : public sound
{
public:
void speak()
{
cout<<"Cat sounds like mewwwww mewwwwwww"<<endl;
}
void callbase()
{
    sound::speak();
}
};
int main()
{
   
   sound *obj;
   dog obj2;
   obj=&obj2;
   obj->speak();
   obj2.callbase();
   cat obj3;
   obj=&obj3;
   obj->speak();
   obj3.callbase();
}