#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int lastInd = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            lastInd = mid;
            s = mid + 1;
        }

        else if (arr[mid] > key)
        {
            // left mei jaao
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            // right mei jaao
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return lastInd;
}

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int FirstInd = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            FirstInd = mid;
            e = mid - 1;
        }

        else if (arr[mid] > key)
        {
            // left mei jaao
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            // right mei jaao
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return FirstInd;
}

int main()
{
    int even[7] = {1, 2, 3, 3, 3, 4, 5};
    cout << "first occurrence of the element 7 is:" << firstOcc(even, 7, 3);
    cout << endl;
    cout << "last occurrence of the element 7 is:" << lastOcc(even, 7, 3);
    cout << endl;
    cout << (lastOcc(even, 7, 3) - firstOcc(even, 7, 3)) + 1;
    // cout << "number 7 occurs:" << (lastOcc - firstOcc) + 1;
    return 0;
}