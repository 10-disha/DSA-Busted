#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    int ans = climbStairs(n - 1) + climbStairs(n - 2);

    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << climbStairs(n);
    // cout << ans;

    return 0;
}