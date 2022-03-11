#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
        return false;

    else
    {
        return isSorted(arr + 1, size - 1);
    }
}

int main()
{

    int arr[5] = {2, 3, 4, 7, 5};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "is sorted" << endl;
    }

    else
    {
        cout << "not sorted" << endl;
    }

    return 0;
}