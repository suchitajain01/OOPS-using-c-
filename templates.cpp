#include <bits/stdc++.h>
using namespace std;

void display(int x)
{
    cout<<x;
}

void display(double x)
{
    cout<<x;


}

void display(string name)
{

    cout<<name;
}

int main()
{
display(10);
display(3.5);
display("suchita");

}

template <class T>

void display(T var )
{
    cout<<var;


}