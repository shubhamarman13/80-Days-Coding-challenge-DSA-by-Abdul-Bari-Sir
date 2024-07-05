#include<iostream>
using  namespace std;
class shape
{
public:
virtual void draw()
{
    cout<<"Drawing the shape"<<endl;
}
};
class circle : public shape
{
    public:
    void draw() override 
    {
        cout<<"Drawing the circle"<<endl;
    }
};
class square : public  shape
{
    public:
    void draw() override
    {
        cout<<"Drawing square"<<endl;

    }
};
class rectangle : public shape
{
    public:
    void draw() override
    {
        cout<<"Drawing the rectangle "<<endl;
    }
};
int main()
{
    shape* obj;
    shape* obj2;
    shape* obj3;
    circle cir;
    square sqr;
    rectangle rec;
    
    obj= &cir;
    obj2= &sqr;
    obj3 = &rec;
    obj->shape::draw();  // in this line we are calling the method of the base class as draw() in the main function directly ;
    obj->draw();
    obj2->draw();    
    obj3->draw();
    

}