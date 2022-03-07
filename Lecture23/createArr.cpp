#include <iostream>
using namespace std;

int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 78, 6, 7, 8, 9};

    // // let's take col wise input
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[col][row];
    //     }
    //     cout << endl;
    // }

    // // let's print the col wise output
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cout << arr[col][row];
    //     }
    //     cout << endl;
    // }

    // let's take row wise input
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    //     cout << endl;
    // }

    // let's print the row wise output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}