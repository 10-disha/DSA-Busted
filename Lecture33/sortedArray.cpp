#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    // base case

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2, 3, 4, 7, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted " << endl;
    }

    else
    {
        cout << "array is not sorted." << endl;
    }

    return 0;
}