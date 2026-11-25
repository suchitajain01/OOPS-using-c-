#include <iostream>
using namespace std;

class B; // Forward declaration

class A
{
    int a;

public:
    void geta(int);
    void showa();
    void displayB(const B&);

    friend class B; // B can access A's private members
};

class B
{
    int b;

public:
    void getb(int);
    void showb();
    void displayA(const A&);

    friend class A; // A can access B's private members
};

void A::geta(int x)
{
    a = x;
}

void A::showa()
{
    cout << "a = " << a << endl;
}

void B::getb(int x)
{
    b = x;
}

void B::showb()
{
    cout << "b = " << b << endl;
}

void B::displayA(const A& obj)
{
    cout << "A's private value: " << obj.a << endl;
}

void A::displayB(const B& obj)
{
    cout << "B's private value: " << obj.b << endl;
}

int main()
{
    A obj1;
    B obj2;

    obj1.geta(10);
    obj2.getb(20);

    obj1.showa();
    obj2.showb();

    obj2.displayA(obj1);
    obj1.displayB(obj2);

    return 0;
}