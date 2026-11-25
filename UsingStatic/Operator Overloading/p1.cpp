#include<iostream>
using namespace std;

class Example 
{
    int a,b;

    public:
    Example();
    Example(int , int);
    void display();
    friend Example operator + (Example, Example);

};

Example ::Example()
{
    a= 0;
    b = 0;
}
void Example :: display()
{
    cout<<a<<""<<b<<endl;
};

Example operator+(Example e1, Example e2)
{
       Example temp;
       temp.a = e1.a + e2.a;
         temp.b = e1.b + e2.b;
         return temp;

}

int main()
{

 Example A(10,20), B(100,200), C;
 
    A.display();
    B.display();

    C = A + B;
    C.display();


return 0;

}
