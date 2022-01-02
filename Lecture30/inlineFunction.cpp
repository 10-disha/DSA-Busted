#include <iostream>
using namespace std;

// void func(int a, int b)
// {
//     a++;
//     b++;
//     cout << a << " " << b << endl;
// }

int main()
{
    int a = 1, b = 2;
    // func(a, b);

    int ans = 0;

    // method 1
    //  if(a>b){
    //      ans=a;
    //  }
    //  else{
    //      ans=b;
    //  }

    // method 2

    ans = (a > b) ? a : b;

    return 0;
}