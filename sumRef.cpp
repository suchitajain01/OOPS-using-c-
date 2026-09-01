#include <bits/stdc++.h>
using namespace std;

int Sum(int*, int*);

int main() {
    int a, b, r;

    cout << "Enter values: ";
    cin >> a >> b;

    r = Sum(&a, &b);

    cout << "Sum: " << r;

    return 0;
}

int Sum(int *x, int *y) {
    int S;
    S = *x + *y;
    return S;
}