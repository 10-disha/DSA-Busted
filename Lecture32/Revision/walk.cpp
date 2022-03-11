#include <iostream>
using namespace std;

void reach(int src, int des)
{
    cout << "source is:" << src << "destination is:" << des << endl;

    if (src == des)
    {
        cout << "poch gye hum";
        return;
    }

    src++;
    reach(src, des);
}

int main()
{
    int src;
    int des;
    cin >> src >> des;

    cout << endl;
    reach(src, des);

    return 0;
}