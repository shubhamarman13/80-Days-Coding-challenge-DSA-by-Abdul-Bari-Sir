// ijn this programm we are going to deffine all the functions  outside the class  
//but the declaration should be inside the class 
#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breath;
    public:
     Rectangle(int l , int b);
     int Area();
     int perimeter();

};

Rectangle:: Rectangle(int l, int b)
{
    length= l;
    breath=b;
}
int Rectangle:: Area()
{
    return length*breath;
}
int Rectangle :: perimeter()
{
return 2*(length+breath);
}
int main()
{
    Rectangle obj(10, 30);
    cout<<obj.Area()<<endl;
    cout<<obj.perimeter()<<endl;


}