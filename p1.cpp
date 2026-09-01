#include <iostream>
using namespace std;

class Student
{
private:
int a,b;
string name;

public:

void getData()
{

    int m1,m2;
    a = m1;
    b = m2;


}

void setData()
{

    string n;
    n = name;


}


void display()
{

    cout<<"name of the student:"<<name;
    cout<<"marks of 2 subjects:"<<a<<b;


}

};

int main()
{
    Student S1;
    S1.setData();
    S1.getData();
    S1.display();

 return 0;


}