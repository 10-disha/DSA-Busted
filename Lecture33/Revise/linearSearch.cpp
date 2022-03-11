#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "size of an array is:" << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    print(arr, size);

    // base case
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;

    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {3, 5, 6, 2, 23};
    int size = 5;
    int key = 6;

    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "present";
    }

    else
    {
        cout << "absent";
    }

    return 0;
}