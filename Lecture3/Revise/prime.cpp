#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int i = 2;

    while (i < a)
    {

        if (a % i == 0)
        {
            cout << "not prime" << endl;
            return 0;
        }
        i++;
    }

    cout << "prime";
}