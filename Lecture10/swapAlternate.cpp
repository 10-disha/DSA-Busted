#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);

            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
        // i += 2;
    }
}

int main()
{
    // int size;
    // cin >> size;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    swapAlternate(arr, 8);
    printArray(arr, 8);

    return 0;
}