#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int element, size;
    vector<int> vect1;
    cout<<"Enter the size of the vector ";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        cout<<"Enter the Element ";
        cin>>element;
        vect1.push_back(element);
    }
    display(vect1);
    vector<int> ::iterator iter= vect1.begin();
    vect1.insert(iter,1000);
    cout<<endl;
    display(vect1);
}

//     for(int i=0; i<5;i++)
//     {
//         cout<<vect1[i]<<endl;
//     }
