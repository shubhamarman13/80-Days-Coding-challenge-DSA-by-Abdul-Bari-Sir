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
int main()
{
    shape* obj;
    shape* obj2;
    circle cir;
    square sqr;
    obj= &cir;
    obj2= &sqr;
    obj->shape::draw();  // in this line we are calling the method of the base class as draw() in the main function directly ;
    obj->draw();
    obj2->draw();    

}