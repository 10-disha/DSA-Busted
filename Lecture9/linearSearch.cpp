#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {2, 34, 5, -6, 7, -8, -3, 55, 12, 1};

    // whether 1 is present in this array or not ?
    cout << "enter the key:";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present " << endl;
    }

    else
    {
        cout << "key is absent" << endl;
    }

    return 0;
}