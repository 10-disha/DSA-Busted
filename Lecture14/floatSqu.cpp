#include <iostream>
using namespace std;

long long squrt(int n)
{
    int s = 0;
    int e = n - 1;
    long long mid = s + (e - s) / 2;
    long long ans = -1;

    while (s <= e)
    {
        long long square = mid * mid;
        if (square == n)
        {
            return mid;
        }

        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (square > n)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempWhole)
{
    double factor = 1;
    double ans = tempWhole;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // 0.1 then 0.01 then 0.01

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{

    int n;
    cout << "Enter the number :";
    cin >> n;

    int tempWhole = squrt(n);
    cout << "More precision square root is:" << morePrecision(n, 3, tempWhole);

    return 0;
}