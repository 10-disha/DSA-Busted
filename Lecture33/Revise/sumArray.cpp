#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    if (n < 0)
    {
        return 0;
    }

    return sum(arr, n - 1) + arr[n - 1];
}

int main()
{

    int arr[5] = {2, 3, 4, 7, 5};
    int size = 5;

    cout << sum(arr, size);

    return 0;
}