#include <iostream>
using namespace std;

class BankAccount
{

static int TotalDeposits;

public:
    void deposit(int amount);
    static void displayTotalDeposits();
    void display();

};


int BankAccount::TotalDeposits = 0;

void BankAccount :: deposit(int amount)
{
    TotalDeposits += amount;
}

void BankAccount :: display()
{
    cout << "Total Deposits: " << TotalDeposits << endl;

}

int main()
{
    BankAccount B1, B2, B3;

    B1.deposit(1000);
    B2.deposit(2000);
    B3.deposit(3000);

    B1.display();
    B2.display();
    B3.display();

    BankAccount::displayTotalDeposits();

    return 0;
}
