#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, float bal)
    {
        name = accountHolderName;
        accNum = accountNumber;
        bal = balance;
    }
    ~BankAccount()
    {
        cout << "Destructor called" << endl;
    }
    void Deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Current balance is " << balance << endl;
        }
        else
        {
            cout << "Amount must be greater than 0" << endl;
        }
    }
};
int main()
{
    
    return 0;
}