#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int sum = 0;
    int i = 2;

    while (i <= a)
    {

        sum = sum + i;
        i = i + 2;
    }

    cout << sum;

    return 0;
}