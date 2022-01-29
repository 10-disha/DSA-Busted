#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    vector<int> arr;
    int n = 5;
    arr = {2, 3, 4, 5, 1};

    insertionSort(5, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}