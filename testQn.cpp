#include <bits/stdc++.h>
using namespace std;

class Student
{
int rollNo;
string name;
int marks;
vector<int>marks[5];

public:

void display();

void calculateMarks(int passingMarks = 40);
{
    auto totalMarks = 0;
    
    for(int i =0;i<5;i++)
    {
        TotalMarks+=marks;
    }

    if(Totalmarks >= passingMarks)
    {
        cout<<name<<"has passed";
    }
    else
    {
        cout<<name<<"has failed";
    }


}

};

void Student:: display();
{
    cout<<rollNo<<endl;
    cout<<name<<endl;
    cout<<marks<<endl;

    for(int mark:: marks)
    {
    cout<<mark<<endl;

    }

}


int main()
{
    Student xyz;
    











}