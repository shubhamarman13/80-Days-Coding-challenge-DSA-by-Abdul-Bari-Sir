#include<iostream>
using namespace std;
struct rectangle
{
    int length ;
    int breath;
} ; //  we can declare the arry of Structure or simple multiple object of it here before the ; semi colon
int main()
{
    struct rectangle r[3]={{2,3},{4,3},{20,10}};
    cout<<"Area of 1st Rectangle : "<<r[0].length*r[0].breath<<endl;
    cout<<"Area of 2nd Rectangle : "<<r[1].length*r[1].breath<<endl;
    cout<<"Area of 3rd Rectangle : "<<r[2].length*r[2].breath<<endl;
// or we can code  like 
r[0].length=30;
r[0].breath=10;
r[1].length=3;
r[1].breath=20;
r[2].length=6;
r[2].breath=8;

}