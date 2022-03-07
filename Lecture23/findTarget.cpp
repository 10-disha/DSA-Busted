#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3];

    cout << "enter the elements:";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    cout << "enter the element to search:";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 3))
    {
        cout << "element is found" << endl;
    }

    else
    {
        cout << "element is not found" << endl;
    }

    return 0;
}