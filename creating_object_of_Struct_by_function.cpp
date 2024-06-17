//in this program we are creating the object of the structre by using the funciton()
//when we call the funciton then its creating the obejct initilizing the data memebr of the structre 
//and in the end its returning the pointer as the obj 

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
int length;
int breath;
};
 struct Rectangle* create_object()
 {
    struct Rectangle *p= new Rectangle;
    p = new Rectangle;
    p->length=20;
    p->breath=10;
    // p->length=20;

    return p;

 }

int main()
{
struct Rectangle *ptr= create_object();
cout<<"length= "<<ptr->length<<endl;
cout<<"breath= " <<ptr->breath;

}