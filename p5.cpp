#include <iostream>
using namespace std;

class Sum
{
    int a, b;

public:
    void calculate(int, int);
    void calculate(float, float);
    
    int display();
    float display(float);
};

// Member function defined outside the class
void Sum::calculate(int x, int y)
{
    a = x;
    b = y;
}

// Overloaded member function
void Sum::calculate(float x, float y)
{
    a = x;
    b = y;
}

// Member function defined outside the class
int Sum::display()
{
    return a + b;
}

// Overloaded display function
float Sum::display(float x)
{
    return a + b + x;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Sum s1;
    s1.calculate(x, y);

    cout << "The sum of integers is: " << s1.display() << endl;

    s1.calculate(3.5f, 7.5f);


    cout << "The float sum is: " << s1.display(0.0f) << endl;

    return 0;
}