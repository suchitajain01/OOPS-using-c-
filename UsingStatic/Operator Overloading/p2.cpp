#include <iostream>
using namespace std;

class Example{

    int a;

public:

Example(int);
void display();
Example operator++();

};

Example :: Example(int x)
{
    a  =x;


}

void Example :: display()
{
cout<<a<<endl;

}

Example Example::operator++()
{
       Example temp;
       temp.a = a + 1;
       return temp;

}


int main()
{


Example A(10);
cout<<"Before pre increment"<<endl;
A.display();

Example B(0);
B = ++A;
cout<<"After pre increment"<<endl;
B.display();
A.display();

return 0;

}