#include<iostream>
using namespace std;
class Rectangle 
{
    private:
    int length=0;
    int breath=0;

    public:
    Rectangle(int l,int b)
    {
        length=l;
        breath=b;

    }
    int Area()
    {
        return length*breath;
    }
    int perimeter()
    {
        return 2*(length+breath);
    }
    void change_length(int value)
    {
        length= value;
    }
    void show_change()
    {
        cout<<"length After apdate="<<length;
    }
};
int main()
{
    int x,y;
    cout<<"Enter the length and breath"<<endl;
    cin>>x>>y;
    Rectangle R1(x,y);
    cout<<"Area = "<<R1.Area()<<endl;
    cout<<"Perimeter = "<<R1.perimeter()<<endl;
    R1.change_length(200);
    R1.show_change();
}c