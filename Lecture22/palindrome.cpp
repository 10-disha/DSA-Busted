#include <iostream>
using namespace std;

char toLowercase(char ch)
{

    if (ch > 'a' && ch < 'z')
        return ch;

    else
    {
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowercase(name[s]) != toLowercase(name[e]))
        {
            return 0;
        }

        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

void reverse(char name[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[20];

    cout << "enter your name:";
    cin >> name;

    int len = getLength(name);

    cout << "length is:" << len << endl;

    reverse(name, len);
    cout << "new reverse name is:";
    cout << name << endl;

    cout << "is palindrome or not" << isPalindrome(name, len);

    cout << " CHARACTER is " << toLowercase('b') << endl;
    cout << " CHARACTER is " << toLowercase('C') << endl;

    return 0;
}