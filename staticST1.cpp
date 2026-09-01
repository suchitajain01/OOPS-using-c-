#include <bits/stdc++.h>
using namespace std;

class Example
{
int a;

public:
static void display();

void geta();
void display();
static void show();

};

void Example :: geta(int x)
{
    a = x;
}


void Example :: display();
{
  
    cout<<a<<""<<endl;
    cout<<n<<""<<endl;
}

void Example :: show()
{

    cout<<"inside class member function"<<endl;
    cout<<n<<endl;
    cout<<a;

}


int main()
{
Example E1;
E1.geta(12);
E1.display();
    
}