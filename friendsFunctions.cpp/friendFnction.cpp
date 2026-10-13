#include <bits/stdc++.h>
using namespace std;

class B;

class A
{
    int a;
    
    public:
    void geta(int);
    void showa();

    friend class B;
    void displayB(B);


};

class B
{
 int b;
public:

void getb(int);
void showb();
void displayA(A);
};


void A :: geta(int x)
{
    a = x;

}

void B :: getb(int n)
{
    b = n;

}

void A::showa()
{
    cout << "Value of a: " << a << endl;
}

void B::showb()
{
    cout << "Value of b: " << b << endl;
}

void B::displayA(A obj)
{
    obj.showa();
}

void A::displayB(B obj)
{
    obj.showb();
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