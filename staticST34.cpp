#include <iostream>
using namespace std;

class Example
{
    static int count;

public:
    static void display();
    void getdata(int);
};

int Example::count = 10;

void Example::display()
{
    cout << "Count = " << count << endl;
}

void Example::getdata(int x)
{
    count = x;
}

int main()
{
    Example E1, E2, E3;

    E1.display();
    E2.display();
    E3.display();

    E1.getdata(12);
    E2.getdata(24);
    E3.getdata(36);

    cout << "\nAfter updating count:\n";

    E1.display();
    E2.display();
    E3.display();

    return 0;
}
