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
void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew :" << amount << "Balance :" << balance <<endl;
        }
        else
        {
            cout << "Insufficient balance" << endl
                 << "Current Balance is $" << balance << endl;
        }
    }
};
int main()
{
    string name;
    int accNum;
    double bal;

    cout << "Enter Account Holder's name :";
    getline(cin, name);
    cout << "Enter Account number :";
    cin >> accNum;
    cout << "Enter Initial Balance : $";
    cin >> bal;

    BankAccount account(name, accNum, bal);
    
    return 0;
}
