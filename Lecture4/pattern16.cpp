#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        while (j <= i)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}