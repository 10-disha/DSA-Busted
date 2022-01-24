// brute force solution

#include <iostream>
using namespace std;

int countNum(int arr[], int n, int counter)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
        if (counter == 3)
            cout << arr[i];
    }
}

int main()
{
    int arr[9] = {2, 2, 3, 4, 1, 2, 3, 4, 5};
    int counter = 0;

    countNum(arr, 9, counter);

    return 0;
}