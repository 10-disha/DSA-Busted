#include <iostream>
using namespace std;

void countNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    countNum(n);

    return 0;
}