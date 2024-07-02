#include<iostream>
using namespace std;
class array
{
public:
int input()
{
    int x; 
    cout<<"Enter the total numebr of array you need "<<endl;
    cin>>x;
    return x;
}

};
int main()
{
    array obj;
    int size =obj.input();
    cout<<size;
    int *ptr = new int[size];


    
}