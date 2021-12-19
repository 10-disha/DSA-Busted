#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "letter is of lowercase";
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "upper case";
    }

    else
    {
        cout << "numeric";
    }
}