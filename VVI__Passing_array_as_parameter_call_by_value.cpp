#include<iostream>
using namespace std;

struct Array_as_Call_by_value
{
    int arr[5];
    int value;

};
void  fun(struct Array_as_Call_by_value obj1)
{
    // in this a new object will be created for the strcutre whcih will contain a array and a integer variable as value in it 
    for (int  i = 0; i < 5; i++)
    {
        cout<<obj1.arr[i]<<endl;
    }
    
}
int main()
{
    struct Array_as_Call_by_value obj={{2,3,4,5,6}, 10};
    // above we are initilizing the data member of the structre as array and value 
    fun(obj);
}