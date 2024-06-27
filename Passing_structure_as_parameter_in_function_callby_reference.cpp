//call by reference in the function of structre 
// passing entire structure as parameter in the function and in the end it returing the value as claculation of Area as length*breath;
// it is an example of call  reference  in the function    

#include<iostream>
using namespace std;
struct Rectangle 
{
    int lenght;
    int breath;

};
int Area(struct Rectangle &r)   // here we are pssing the structure as parameter and it is call  by value 
{
    r.lenght=200;   
    return r.breath*r.lenght;

}
int main()
{
    struct Rectangle r1;
    r1.lenght=10;
    r1.lenght=10;
    r1.breath=20;
    cout<<"Area= "<<Area(r1)<<endl;
    cout<<r1.lenght;

}