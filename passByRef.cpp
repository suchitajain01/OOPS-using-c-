#include <bits/stdc++.h>
using namespace std;

int sum(int, int);  // function declaration

int main()
{
    int a = 10;

    int &b = a;     // b is a reference to a

    a = a + 10;

    cout << a << endl;
    cout << b << endl;

    return 0;
}