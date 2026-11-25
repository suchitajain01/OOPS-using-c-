#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    friend Complex operator+(Complex c1, Complex c2);

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp(0, 0);

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}