#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "enter amount here:";
    cin >> amount;

    int Rs100, Rs50, Rs20, Rs10, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "number of 100 rupee notes required are:" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "number of 50 rupee notes required are:" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "number of 20 rupee notes required are:" << Rs20 << endl;

    case 4:
        Rs10 = amount / 10;
        amount = amount % 10;
        cout << "number of 10 rupee notes required are:" << Rs10 << endl;

    case 5:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "number of 1 rupee notes required are:" << Rs1 << endl;
    }
}