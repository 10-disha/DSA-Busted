#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "Printing the Array" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int fourth[10] = {0};

    int n = 15;
    printArray(fourth, 10);
}