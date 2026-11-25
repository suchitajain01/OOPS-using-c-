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

    Complex operator+(Complex c2)
    {
        Complex temp(0, 0);

        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}