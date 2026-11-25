#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2, num3; 

public:

    void input() {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }
    friend double calculateAverage(Numbers n);
};

// Defining the friend function outside the class (no scope resolution operator needed)
double calculateAverage(Numbers n) {
    // Accessing private members num1, num2, and num3 directly
    return (n.num1 + n.num2 + n.num3) / 3.0;
}

int main() {
    Numbers obj;
    
    // Call member function to input numbers
    obj.input();
    
    // Call the friend function by passing the object as an argument
    double average = calculateAverage(obj);
    
    cout << "The average of the three numbers is: " << average << endl;
    
    return 0;
}
