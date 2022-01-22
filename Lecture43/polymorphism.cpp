#include <iostream>
using namespace std;

class A
{

public:
    void sayHello()
    {
        cout << "hello disha" << endl;
    }

    void sayHello(string name)
    {
        cout << "hello disha" << endl;
    }
    int sayHello(char name)
    {
        cout << "hello disha" << endl;
    }
};

int main()
{

    A obj;
    obj.sayHello();
    return 0;
}