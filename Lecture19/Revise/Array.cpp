#include <iostream>
#include <array>

using namespace std;
int main()
{

    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};
    // this is also static
    // above 2 arrays are same.
    // no difference between above 2 arrays.

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd index:" << a.at(2) << endl;

    cout << "empty or not:" << a.empty() << endl;

    cout << "first element:" << a.front() << endl;
    cout << "last element:" << a.back() << endl;
}
