#include <iostream>
using namespace std;

int main()
{
    char ch = '1';
    int num = 1;
    cout << endl;

    switch (2 * num)
    {

    case 1:
        cout << "first" << endl;
        break;

    case 2:
        cout << "second " << endl;
        break;

    case '1':
        switch (num)
        {
        case 1:
            cout << "value of num is" << num << endl;
            break;
        }

        break;

    default:
        cout << "it is default case" << endl;
    }
}