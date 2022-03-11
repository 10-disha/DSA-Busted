#include <iostream>
using namespace std;

bool checkPalin(string str, int i, int j)
{

    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])

        return false;

    else
    {
        return checkPalin(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "aabbaa";
    cout << endl;

    bool isPalindrome = checkPalin(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "is palindrome" << endl;
    }

    else
    {
        cout << "not a palindrome" << endl;
    }
    return 0;
}