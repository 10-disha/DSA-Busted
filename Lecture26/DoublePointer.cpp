#include <iostream>
using namespace std;

void update(int **p2)
{
    // nothing will get changed
    // p2 = p2 + 1;

    // yes will change
    // *p2 = *p2 + 1;

    // yess will change
    **p2 = **p2 + 1;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    // cout << "All good" << endl;

    // cout << "printing content p" << p << endl;
    // cout << "Address of p" << &p << endl;

    // cout << *ptr << endl;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **ptr << endl;

    // cout << "last" << endl;
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *ptr << endl;

    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;
    update(p2);
    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p2 << endl;

    return 0;
}