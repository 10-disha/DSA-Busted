#include <iostream>
using namespace std;

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        // agar yaha tak poche matlab
        // arr[left]==1 and arr[right]==0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[8] = {1, 0, 0, 0, 1, 0, 1, 1};

    sortOne(arr, 8);
    printArr(arr, 8);

    return 0;
}