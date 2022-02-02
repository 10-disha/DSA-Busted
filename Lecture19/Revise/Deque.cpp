#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "print 1st index element" << d.at(1) << endl;
    cout << "front element" << d.front() << endl;
    cout << "back" << d.back() << endl;

    cout << "empty or not" << d.empty() << endl;

    cout << "before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase" << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_front();
    cout << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
}