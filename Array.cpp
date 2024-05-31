#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size \n";
    cin >> n;
    int Arr[n]={2,3,4,5,6};
    for(int x:Arr)
    {
        cout<<x<<endl;
    }
}