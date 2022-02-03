#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0, j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }

        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[3] = {3, 6, 9};
    int arr2[5] = {5, 7, 8, 22, 45};
    int arr3[8] = {0};

    merge(arr1, 3, arr2, 5, arr3);

    print(arr3, 8);

    return 0;
}