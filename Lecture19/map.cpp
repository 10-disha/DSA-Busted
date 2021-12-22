#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "disha";
    m[233] = "jayswal";
    m[33] = "rajendra";

    m.insert({5, "disha"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "find -13" << m.count(-13) << endl;
    m.erase(5);

    cout << "after erase:" << endl;

    for (auto i : m)
    {
        cout << " " << i.first << " " << i.second << endl;
    }
}