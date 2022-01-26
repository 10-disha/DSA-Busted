#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
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

    return ans;
}

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
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

    return ans;
}

int main()
{
    int even[6] = {1, 2, 3, 3, 4, 5};
    int odd[5] = {1, 2, 3, 4, 4};

    cout << "first occurrence of the element is:" << firstOcc(even, 6, 3);
    cout << endl;
    cout << "last occurrence of the element is:" << lastOcc(even, 6, 3);
    cout << endl;

    cout << "first occurrence of the element is:" << firstOcc(odd, 5, 4);
    cout << endl;
    cout << "last occurrence of the element is:" << lastOcc(odd, 5, 4);

    return 0;
}