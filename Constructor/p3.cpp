#include <bits/stdc++.h>
using namespace std;

class Example
{
int a,b;

public:

Example();
Example(int , int);
void display();
Example sum(Example , Example);

};

Example:: Example()
{}

Example :: Example(int x , int y)
{
    a=x;
    b = y;
}

void Example :: display()
{
    cout<<a<<" "<<b<<endl;
}

Example Example ::sum (Example e1, Example e2)
{
    Example e;
    e.a = e1.a + e2.a;
    e.b = e1.b + e2.b;
    return e;
}

int main()
{

Example A(10,20);
A.display();

Example B(100,200);
B.display();

Example C;
C = C.sum(A,B);
C.display();


}