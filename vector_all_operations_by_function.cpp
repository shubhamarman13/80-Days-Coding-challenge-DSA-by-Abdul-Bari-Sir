#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Display(vector<int> &arr)
{
    if (arr.size() == 0)

    {
        cout << "Vector is empty ";
        return 0;
    }
    else
    {
        cout << "Elements are : ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }
    // cout << endl;
    return 1;
}
void Insert(vector<int> &arr, int value)
{
    arr.push_back(value);
    cout << "Element added ";
}
int sort_the_vector(vector<int> &arr)
{
    if (arr.size() == 0)

    {
        cout << "Vector is empty ";
        return 0;
    }
    cout << "vector is now sorted  ";
    sort(arr.begin(), arr.end());
    Display(arr);
    return 1;
}

int first_element(vector<int> &arr)
{
    if (arr.size() == 0)

    {
        cout << "Vector is empty ";
        return 0;
    }
    // return &(*arr.begin());
    cout << "First element is :" << arr[0];
    // return arr[0];
    return 1;
}
int last_element(vector<int> &arr)
{
    if (arr.size() == 0)

    {
        cout << "Vector is empty ";
        return 0;
    }

    int last = arr.size();
    cout << "last Element is : " << arr[last - 1];
    return 1;
}

int delete_full_vector(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << "Vector is empty ";
        return 0;
    }

    arr.erase(arr.begin(), arr.end());
    cout << "vector Deleted ";
    return 1;
}
int remove_duplicate(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << "Vector is empty " << endl;
        return 0;
    }
    cout << "After Removing Duplicate Elements vector is ";
    sort(arr.begin(), arr.end());
    auto last_index = unique(arr.begin(), arr.end());
    arr.erase(last_index, arr.end());
    Display(arr);
}
int main()
{
    vector<int> arr;
    while (true)
    {
    abc:
        cout << "**************************************************" << endl;

        int choice;
        cout << "1 insert Element " << endl;
        cout << "2 Sort the vector  " << endl;
        cout << "3 Remove_duplicate Element " << endl;
        cout << "4 Display   " << endl;
        cout << "5 first Element " << endl;
        cout << "6 Last  Element " << endl;
        cout << "7 Delete Full vector   " << endl;
        cout << "8 Exit    " << endl;
        cout << "***********************************************" << endl;
        cout << "Enter  Your Choice " << endl;
        cin >> choice;
        cout << "**************************************************" << endl;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the value ";
            int value;
            cin >> value;
            Insert(arr, value);
            cout << endl;
            break;
        }
        case 2:
        {
            sort_the_vector(arr);
            cout << endl;
            break;
        }
        case 3:

        {
            remove_duplicate(arr);
            cout << endl;
            break;
        }
        case 4:
        {
            Display(arr);
            cout << endl;
            break;
        }
        case 5:
        {
            first_element(arr);
            cout << endl;
            break;
        }
        case 6:
        {
            last_element(arr);
            cout << endl;
            break;
        }
        case 7:
        {
            delete_full_vector(arr);
            cout << endl;
            break;
        }
        case 8:
        {
            exit(1);
            break;
        }
        }
    }
}
