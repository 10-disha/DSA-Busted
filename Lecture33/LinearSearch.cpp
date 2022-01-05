#include <iostream>
using namespace std;

int print(int arr[], int n)
{
    cout << "size of array is:" << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPresent(int arr[], int size, int key)
{
    print(arr, size);
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }

    else
    {
        bool remainingPart = isPresent(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[] = {2, 33, 4, 5, 66};
    int size = 5;
    int key = 22;

    bool ans = isPresent(arr, size, key);

    if (ans)
    {
        cout << "element found." << endl;
    }

    else
    {
        cout << "element not found." << endl;
    }
}