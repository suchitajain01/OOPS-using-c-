##include <iostream>
using namespace std;

class Example
{
    int a;
    static int n;

public:
    void geta(int x);
    void display();
    static void show();
};

// Define the static data member outside the class
int Example::n = 10;

void Example::geta(int x)
{
    a = x;
}

void Example::display()
{
    cout << "a = " << a << endl;
    cout << "n = " << n << endl;
}

void Example::show()
{
    cout << "Inside static member function" << endl;
    cout << "n = " << n << endl;
}

int main()
{
    Example E1;

    E1.geta(12);
    E1.display();

    Example::show();

    return 0;
}