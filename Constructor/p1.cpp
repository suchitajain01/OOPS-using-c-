//special member function because it has the same name as that of class
//we use to initialise data members and objects 
//declare inside public section
//return no value 
//they are not called , automatically invoked while creating objects.\

/*
types of constructor


1) default
2) parameterised
3) copy



*/

#include<bits/stdc++.h>
using namespace std;
class Example
{
int a,b;
public:

Example(int, int);
void display();

};

Example :: Example(int x, int y)
{
  a= x;
  b = y;


}

void Example :: display()
{

cout<<a<<endl;
cout<<b<<endl;

}

int main()
{

Example E1 = Example(100,200);
E1.display();

Example E2 (60,120);
E2.display();


}