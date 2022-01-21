#include <iostream>
using namespace std;

int update(int arr[], int size)
{
    cout << "inside the function" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    cout << "going out of the function" << endl;
}

int main()
{
    int size;
    cin >> size;

    int arr[5] = {1, 33, 455, 53, 4};
    update(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}