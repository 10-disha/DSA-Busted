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

class D
{
public:
    void func4()
    {
        cout << "inside function D" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "inside function 2" << endl;
    }
};

class C : public A, public D
{
public:
    void func3()
    {
        cout << "inside function 3" << endl;
    }
};

int main()
{

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();
    object3.func4();

    D object4;
    object4.func4();

    return 0;
}