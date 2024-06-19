// this program is the conclusion of the pointers with structure , structure as parameter
//  function with  prameter as structure
//  most important thing is that in this program i have done everything by the function nothing inside the main function ;

#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};
void initilizing(struct Rectangle *ptr)
{
    cout << "Enter the length" << endl;
    cin >> ptr->length;
    cout << "Enter the breath " << endl;
    cin >> ptr->breath;
}
void display(struct Rectangle *ptr1)
{
    cout<<"length= "<<ptr1->length<<endl;
    cout<<"breath= "<<ptr1->breath<<endl;
}

int Area(struct Rectangle *ptr2)
{
    return ptr2->length*ptr2->breath;
}
void  cahnge_length(struct Rectangle *ptr3,int value)
{
    ptr3->length=value;
}

int main()
{
    struct Rectangle ptr;
    initilizing(&ptr);
    display(&ptr);
    cout<<"Area = "<<Area(&ptr)<<endl;
    cahnge_length(&ptr,50);
    cout<<"length Updated "<<ptr.length;

    return 0;
}
 