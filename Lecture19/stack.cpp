#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("ayush");
    s.push("disha");
    s.push("gina");

    cout << "top element:" << s.top() << endl;

    s.pop();
    cout << "top element:" << s.top() << endl;

    cout << "size :" << s.size() << endl;

    cout << "empty or not" << s.empty() << endl;
}
