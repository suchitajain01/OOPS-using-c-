#include <iostream>
using namespace std;

class Example
{

static int count; //class variable
int a;  //object varaible 

public:

void getdata(int a);
void display();

};

int Example :: count;


void Example :: getdata(int x)
{

    a = x;
    count++;
}

void Example :: display()
{

    cout<<a<<endl;
     cout<<count<<endl;


}

int main()
{

Example E1,E2,E3;
E1.display();
E2.display();
E3.display();
E1.getdata(12);
E2.getdata(24);
E3.getdata(36);

}

