/* 
wap where friend function finds the maximum value between pvt integers of 2 classes 
*/

#include <bits/stdc++.h>
using namespace std;

class B;

class A
{
int x;

public:
void getdata(int);

friend void max(const A&obj1, const B&obj2);
};


class B
{

int y;

public:
void getdata(int);

friend void max (const A& , const B& );
};


void A:: getdata(int a)
{
    x = a;
}

void B:: getdata(int b)
{
    y = b;
}

void max(const A& obj1, const B& obj2)
{

    if(obj1.x > obj2.y)
    {
        cout<<obj1.x;

    }

    else
    {
        cout<<obj2.y;

    }

}

int main()
{
   A obj1;
   B obj2;

   obj1.getdata(10);
   obj2.getdata(20);

    max(obj1,obj2);




}