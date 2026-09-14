#include <bits/stdc++.h>
using namespace std;

class A
{ 
    int a;
    public:

    
      void geta(int);
      friend void swap(A,B);


};


class B
{

    int b;

    public:

    void getb(int );
    friend void swap(A,B);

};


void A:: geta(int x)
{
    a =x;
}

void B:: getb(int y)
{
    b= y;
}

void swap(A obj1,B obj2)
{
    int temp;
    temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;

    cout<<"After swapping: "<<endl;
    cout<<"Value of a: "<<obj1.a<<endl;
    cout<<"Value of b: "<<obj2.b<<endl;

}

int main()
{

A obj1;
B obj2;
obj1.geta(10);
obj2.getb(29);

swap(obj1,obj2);

return 0;

}
