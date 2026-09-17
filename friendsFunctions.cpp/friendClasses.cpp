//isme ham kisi class ke existing member function ko dusri class ka friend function bnanana
#include <bits/stdc++.h>
using namespace std;

class B;
class A
{

public:

void display(B);

};

class B
{

    int b;
    public:

    void getb(int);
    friend void A:: display(B);

};


void B :: getb(int y)
{
    b  =y;
}

void A :: display(B obj1)
{

    cout<<obj1.b<<endl;

}

int main()
{

B obj1;
obj1.getb(10);
A obj2;

obj2.display(obj1);

}

//TYPES OF FRIENDSHIPS

/*

- a single function is declared as a friend
- only one specific member function of another class is friend
- all member functions of another class are friends









*/