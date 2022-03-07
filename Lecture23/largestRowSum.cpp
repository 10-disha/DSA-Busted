#include <iostream>
#include <math.h>
using namespace std;

int largestSum(int arr[][3], int row, int col)
{

    cout << "Printing row of the largest Sum->";
    int maxi = 0;

    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "maximum sum is:" << maxi << endl;
    return rowIndex;
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

    int ans = largestSum(arr, i, j);
    cout << "the largest row sum is at" << ans << " row" << endl;

    return 0;
}