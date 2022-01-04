#include <iostream>
using namespace std;

void reachHome(int src, int des)
{

    cout << "source hai:" << src << "destination hai:" << des << endl;
    // base case.
    if (src == des)
    {
        cout << "bus pohoch gye apne";
        return;
    }

    // processing
    src++;

    // recursive function.
    reachHome(src, des);
}

int main()
{
    int des = 10;
    int src = 1;

    reachHome(src, des);

    return 0;
}