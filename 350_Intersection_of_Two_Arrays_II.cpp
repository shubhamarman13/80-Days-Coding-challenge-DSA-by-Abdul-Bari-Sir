#include<iostream>
using namespace std;
int main()
{
    int temp=0;
    int size1,size2;
    cout<<"Enter the  size of both the array one by one "<<endl;
    cin>>size1>>size2;

    int Arr1[size1];
    int Arr2[size2];
    int Arr3[100];
    for (int i = 0; i < size1; i++)
    {
        cin>>Arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        cin>>Arr2[i];
    }
    
    // checking and asigning vlaue 
    for (int  i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (Arr1[i]==Arr2[j])
            {
                Arr3[temp]=Arr1[i];
                temp++;
            }
            
        }
        
    }

    for (int i = 0; i < temp; i++)
    {
        cout<<Arr3[i]<<" ";
    }
    
}