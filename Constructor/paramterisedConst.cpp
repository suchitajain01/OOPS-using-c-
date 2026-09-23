#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;
    static int count;

public:

    Student(int, string);
    void display();

    static void show();
};

// Constructor definition
Student :: Student(int r, string n)
{
    roll = r;
    name = n;
    count++;
}

void Student :: display()
{
    cout << roll << " " << name << endl;
}

// Definition of static data member
int Student :: count = 0;

void Student :: show()
{
    cout << "Total students: " << count << endl;
}

int main()
{
    Student s1(2, "ABC");
    s1.display();

    Student s2 = Student(5, "Amit");
    s2.display();

    Student :: show();

    return 0;
}