#include <vector>
#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    // base case - already sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // 1 case solve karlia-- largest element will now come to the last and right place
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {4, 3, 77, 1, 67};
    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;
    return 0;
}