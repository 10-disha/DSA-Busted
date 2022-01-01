#include <iostream>
using namespace std;

void a(int &i)
{
    cout << i << endl;
    b(i);
}

void b(int &i)
{
    cout << i << endl;
}

int main()
{
    int i = 5;
    a(i);

    return 0;
}