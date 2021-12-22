#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;
    q.push("disha");
    q.push("rajendra");
    q.push("jayswal");

    cout << "before pop size:" << q.size() << endl;
    cout << "first element:" << q.front() << endl;
    q.pop();
    cout << "first element" << q.front() << endl;

    cout << "after pop size:" << q.size() << endl;
}