#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "inside function 1" << endl;
    }
};

class B
{
public:
    void func1()
    {
        cout << "inside function 2" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    obj.A::func1();
    obj.B::func1();

    return 0;
}