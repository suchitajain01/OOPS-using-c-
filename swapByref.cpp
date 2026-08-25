#include <bits/stdc++.h>
using namespace std;

void Swap(int&, int&);

int main() {
    int a, b;

    cout << "Enter values: ";
    cin >> a >> b;

    Swap(a, b);

    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}

void Swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

