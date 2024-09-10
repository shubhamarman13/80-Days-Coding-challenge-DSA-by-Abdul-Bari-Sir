#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool prime(int x)
{
    if(x<=1)
    {
        return false;
    }
    if(x==2)
    {
        return 2;
    }
    if(x%2==0)
    {
        return false;
    }
    for (int i = 3; i < x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    
    int input;
    cout<<"Enter the element  you want to insert ";
    cin>>input;
    vector <int> arr;
    vector <int> prime1;
    vector <int> non_prime;
    // vector <string> arr={"shubham","arman","bambam","Manish"};

    for (int i = 0; i < input; i++)
    {
        int value;
        cout<<"Enter the value ";
        cin>>value;
        arr.push_back(value);
    }
    for(int item : arr)
    {
        if(prime(item)==true)
        {
            prime1.push_back(item);
        }
        else
        {
            non_prime.push_back(item);
        }
    }
    sort(prime1.begin(),prime1.end());
    sort(non_prime.begin(),non_prime.end());
    cout<<"prime are:  ";
    for(int item: prime1)
    {
        cout<<item<<" ";
    }
    cout<<"\nNon prime are:  ";
    for(int item: non_prime)
    {
        cout<<item<<" ";
    }
       // for(int item: arr)
    // {
    //     cout<<item<<" ";
    // }

    return 0;
}