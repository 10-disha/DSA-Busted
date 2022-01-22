#include <iostream>
using namespace std;

class Human
{

protected:
    int height;
    int weight;

private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    Male m1;
    cout << m1.getHeight() << endl;
    cout << "this is perfect" << endl;
    // cout << m1.height << endl;

    // Male object1;
    // cout << object1.color << endl;
    // cout << object1.age << endl;
    // cout << object1.height << endl;

    // object1.setWeight(44);
    // cout << object1.weight << endl;
    // object1.sleep();

    return 0;
}