#include <bits/stdc++.h>
using namespace std;

class Test;   // Forward declaration

class Example
{
    int a;

public:
    Example(int);
    void displayA();

    friend void Sum(Example, Test);
};

class Test
{
    int b;

public:
    Test(int);
    void displayB();

    friend void Sum(Example, Test);
};

Example::Example(int x)
{
    a = x;
}

void Example::displayA()
{
    cout << a << endl;
}

Test::Test(int y)
{
    b = y;
}

void Test::displayB()
{
    cout << b << endl;
}

void Sum(Example E1, Test T1)
{
    int s = E1.a + T1.b;
    cout << "Sum = " << s << endl;
}

int main()
{
    Example E1(10);
    E1.displayA();

    Test T1(20);
    T1.displayB();

    Sum(E1, T1);

    return 0;
}

//default
//