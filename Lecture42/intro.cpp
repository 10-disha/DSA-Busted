#include <iostream>
#include <cstring>
// #include "Hero.cpp"
using namespace std;

// class Hero
// {

//     // properties
//     int health;
// };

class Hero
{
    // properties
private:
    // char name[100];
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    Hero()
    {
        cout << "default constructor is called here." << endl;
        name = new char[100]; // dynamically array allocation.
    }

    Hero(int health)
    {
        cout << "address this is:" << this << endl;
        // cout << "Constructor is called." << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor

    // Hero(Hero &temp)
    // {
    //     cout << "copy constructor is called" << endl;
    //     cout << "health" << this->health << endl;
    //     cout << "level" << this->level << endl;
    // }

    void print()
    {
        cout << "name" << this->name << endl;
        cout << "health" << this->health << endl;
        cout << "level" << this->level << endl;
    }

    // void print()
    // {
    //     cout << level << endl;
    // }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        return timeToComplete;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor bhai is called" << endl;
    }
};

int Hero::timeToComplete = 8;

int main()
{
    cout << Hero::timeToComplete << endl;

    // Static
    // Hero a;

    // // Dynamic
    // Hero *b = new Hero();

    // delete b;

    // Hero hero1;

    // hero1.setHealth(12);
    // hero1.setLevel('F');
    // char name[7] = "Babbar";
    // hero1.setName(name);

    // hero1.print();

    // // use default copy constructor
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // Hero S(70, 'C');
    // S.print();

    // // Copy constructor
    // Hero R(S);
    // R.print();

    // cout << "hi" << endl;
    // // object created statically
    // Hero ramesh(10);
    // cout << "ramesh add:" << &ramesh << endl;
    // ramesh.getHealth();

    // // object created dynamically
    // Hero *h = new Hero;

    // static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout << "level is:" << a.level << endl;
    // cout << "health is:" << a.getHealth() << endl;

    // // dynamic allocation
    // Hero *h = new Hero;
    // h->setLevel('A');
    // h->setHealth(70);
    // cout << "level is " << (*h).level << endl;
    // cout << "health is " << (*h).getHealth() << endl;

    // cout << "Ramesh health is:" << ramesh.getHealth() << endl;
    // ramesh.health = 20;

    // use setter.
    // ramesh.setHealth(70);
    // ramesh.level = 'D';
    // cout << sizeof(ramesh) << endl;
    // cout << "Helth is :" << ramesh.getHealth() << endl;
    // cout << "Level is:" << ramesh.level << endl;
    return 0;
}