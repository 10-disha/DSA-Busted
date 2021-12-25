#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p;
    p = &i;
    cout << "address of variable is:" << p << endl;
    cout << "address of pointer is:" << &p << endl;
    return 0;
}