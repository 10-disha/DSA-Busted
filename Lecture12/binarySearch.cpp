#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        // upar start aur end update hue honge so we need to again update out mid element.

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int even[6] = {2, 3, 4, 6, 13, 18};
    int odd[5] = {1, 4, 66, 78, 99};

    int evenIndex = binarySearch(even, 6, 6);

    cout << "Index of 18 is" << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 66);

    cout << "Index of 66 is" << oddIndex << endl;

    return 0;
}