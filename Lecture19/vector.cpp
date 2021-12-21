#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> a(5, 1);
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    vector<int> last(a);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    vector<int> v;
    cout << "Size-->" << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-->" << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity-->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-->" << v.capacity() << endl;
    cout << "Size-->" << v.size() << endl;

    cout << "Element at 2nd index" << v.at(1) << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "before class size" << v.size() << endl;
    v.clear();
    cout << "after class size" << v.size() << endl;
    cout << "after class capacity" << v.capacity() << endl;
}