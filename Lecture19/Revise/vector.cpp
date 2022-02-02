// let's assume ki vector ka size 4 tha fir jab 5th element daalenge tab vector ka size automatically double ho jayega
// jo naya banega vo vector double size ka hoga fir purane elements sare naye mei copy ho jayenge and then purana vala dead ho jayega

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    vector<int> a(5, 1);

    vector<int> last(a);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << "capacity-->" << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity-->" << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity-->" << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity-->" << v.capacity() << endl;
    cout << "size-->" << v.size() << endl;

    cout << "Element at 2nd index" << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "back" << v.back() << endl;

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
    cout << endl;

    cout << "before clear" << v.size() << endl;
    v.clear();
    cout << "after clear" << v.size() << endl;
}