#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(2);
    maxi.push(45);
    maxi.push(44);
    maxi.push(67);
    maxi.push(88);

    cout << "size--->" << maxi.size() << endl;
    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(12);
    mini.push(222);
    mini.push(145);
    mini.push(133);
    mini.push(15);

    cout << "size of mini-->" << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}