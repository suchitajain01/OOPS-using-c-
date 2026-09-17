#include <bits/stdc++.h>
using namespace std;

class B;

class A
{
    int a;

public:
    void geta(int);

    friend class B;  // B can access private members of A
};

class B
{
public:
    void display(A);
};

void A::geta(int x)
{
    a = x;
}

void B::display(A obj1)
{
    cout << obj1.a << endl;
}

int main()
{
    A obj1;

    obj1.geta(10);

    B obj2;

    obj2.display(obj1);

    return 0;
}