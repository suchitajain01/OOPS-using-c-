#include <bits/stdc++.h>
using namespace std;

class Example1
{
int a;
static int n;

public:

void geta(int x);
static void display();


};

int Example1::n = 20;


void Example1 :: geta(int x)
{
     a= x;

}

void Example1 :: display()
{
    cout<<"the value of n is:"<<n<<endl;
}

int main()
{

Example1 E1;
E1.geta(10);
E1.display();



}
