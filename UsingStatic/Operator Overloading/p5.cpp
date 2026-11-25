#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }

    void operator++()
    {
        x = x + 1;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    Number n(5);

    ++n;

    n.display();

    return 0;
}