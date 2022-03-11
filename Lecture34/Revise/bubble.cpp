#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    // base case

    if (n == 0 || n == 1)
        return;

    // ek solve krlo-- largest ko sabse right mei rakh do
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            swap(arr[i + 1], arr[i]);
        }
    }

    sortArray(arr, n - 1);
}

int main()
{
    int arr[5] = {2, 4, 1, 33, 20};
    int size = 5;

    sortArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }

    return 0;
}