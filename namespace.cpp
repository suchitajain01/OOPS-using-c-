#include <bits/stdc++.h>
using namespace std;

namespace A
{
    int x = 10;

    void display()
    {
        cout << " A";
    }
}

namespace B
{
    double x = 6.5;

    void display()
    {
        cout << "B";
    }
}

void display();  //global display because not inside any namesspace 

namespace verylongnamespace
{
    int a = 10;
}

namespace vcn = verylongnamespace;

int main()
{
    string x = "cse 36";

    display();

    cout << x;

    cout << A::x << endl;
    A::display();

    cout << B::x << endl;
    B::display();

    cout << endl;
    cout << vcn::a << endl;

    return 0;
}

void display()
{
    cout << "main";
}