#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int start, int end, int k)

{
    print(arr, start, end);
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;
    cout << "Value of arr mid is:" << arr[mid] << endl;

    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, end, k);
    }

    else
    {
        return binarySearch(arr, start, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {3, 5, 6, 88, 99, 102};
    int key = 3;
    int size = 6;

    cout << "Present or not." << binarySearch(arr, 0, size - 1, key);

    return 0;
}