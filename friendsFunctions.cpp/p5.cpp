#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string name;
    int amount;

public:
    void getdata(string, int);
    friend Employee sum(Employee, Employee, Employee);
    void display(Employee);
};

void Employee::getdata(string nm, int x)
{
    name = nm;
    amount = x;
}

Employee sum(Employee E1, Employee E2, Employee E3)
{
    Employee S;

    S.amount = E1.amount + E2.amount + E3.amount;

    return S;
}

void Employee::display(Employee E)
{
    cout << E.amount;
}

int main()
{
    Employee A, B, C, D;

    A.getdata("Suchita", 100000);
    B.getdata("Rahul", 2000);
    C.getdata("Neha", 30000);

    D = sum(A, B, C);

    D.display(D);

    return 0;
}