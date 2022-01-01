#include <iostream>
using namespace std;

void func(int a, int b)
{
    a++;
    b++;
    cout << a << " " << b << endl;
}

int main()
{
    int a = 1, b = 2;
    func(a, b);

    return 0;
}