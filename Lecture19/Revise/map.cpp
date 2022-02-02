#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "disha";
    m[22] = "jayswal";
    m[3] = "rajendra";

    m.insert({5, "dis"});

    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }

    cout << "finding 3-->" << m.count(3) << endl;

    m.erase(3);

    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }
}