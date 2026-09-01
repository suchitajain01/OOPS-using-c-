//scope resolution operator is  ::
#include<iostream>
using namespace std;

class Example
{
int a,b;

public:    
void getdata();
void print();

};

void Example :: getdata()
{

cout<<"enter the data";
cin>>a>>b;
}

void Example:: print()
{

cout<<"the numbers are:"<<a<<""<<b<<endl;

}

int main()
{
Example E1;
E1.getdata();
E1.print();
return 0;
}