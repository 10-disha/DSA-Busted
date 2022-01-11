#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s > e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // now left part ko solve karna hai.
    mergeSort(arr, s, mid);

    // solve right part.
    mergeSort(arr, mid + 1, e);

    // now merge 2 arrays
    merge(arr, s, e)
}

int main()
{
    int arr[5] = {2, 3, 44, 1, 6};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    return 0;
}