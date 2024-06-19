#include<iostream>
using namespace std;
template <class T>
class Rectangle
{
    T length,breath;
    public:
    Rectangle(T l, T b);
    T Area();
    T perimeter();
};
// template <class T>

template <class T>
Rectangle<T>::Rectangle(T l, T b)
{
    length = l;
    breath = b;  // Corrected spelling
}

template <class T>
T Rectangle<T>:: perimeter()
{
    return 2*(length+breath);
}
template <class T>
T Rectangle<T>:: Area()
{
    return length*breath;
}
int main()
{
    Rectangle <int> obj(10,20);
    cout<<obj.Area()<<endl;
    cout<<obj.perimeter()<<endl;
    return 0;

}
