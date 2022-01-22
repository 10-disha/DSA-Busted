#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "speaking";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "barking";
    }
};

int main()
{
    Dog o;
    o.speak();

    return 0;
}