#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{

    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        // recursive call
        return checkPalindrome(str, i++, j--);
    }
}

int main()
{
    string name = "disha";
    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "yes it is palindrome";
    }

    else
    {
        cout << "not a palindrome";
    }
}