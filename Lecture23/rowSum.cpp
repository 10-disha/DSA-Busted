#include <iostream>
using namespace std;

void printSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum->";
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        cout << sum << "  ";
    }
}

int main()
{
    int arr[3][3];
    int i = 0;
    int j = 0;

    cout << "enter the elements:";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    printSum(arr, i, j);

    return 0;
}