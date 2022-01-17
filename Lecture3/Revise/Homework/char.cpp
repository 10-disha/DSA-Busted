#include <iostream>
using namespace std;

int main()
{

    char a;
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "this is upper case" << endl;
    }

    if (a >= 'a' && a <= 'z')
    {
        cout << "this is lower case" << endl;
    }
    if (a >= '0' && a <= '9')
    {
        cout << "this is numeric" << endl;
    }

    return 0;
}