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

    int result = s1.display();

    cout << "The sum is: " << result << endl;

    return 0;
}