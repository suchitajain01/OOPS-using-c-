//scope resolution operator is  ::
#include<iostream>
using namespace std;

class Example
{
int a,b;

public:    
void getdata(int , int );
void print();

};

void Example :: getdata(int x, int y)
{

a = x;
b = y;
}


void Example:: print()
{

cout<<"the numbers are:"<<a<<""<<b<<endl;

}

int main()
{
    int a1,b1;
cin>>a1>>b1;
Example E1;
E1.getdata(a1, b1);
E1.print();
return 0;
}