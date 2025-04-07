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
void dispAccDetails()
    {
        cout << "\nAccount holder name :" << accountHolderName << "\nAccount number" << accountNumber << "\nCurrent Balance : " << balance << endl;
    }
};
    void displayMenu()
    {
        cout << "\n1.Deposit Money\n2.Withdraw Money\n3.View Account Details\n4.Exit program\nPlease enter your choice" << endl;
    }
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

    int a;
    double amount;
    while (true)
    {
        displayMenu();
        cin >> a;
        
        switch (a)
        {
        case 1:
            cout << "Enter the amount to deposit :$";
            cin >> amount;
            account.Deposit(amount);
            break;
        case 2:
            cout << "Enter the amount you want to withdraw :$";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.dispAccDetails();
            break;
        case 4:
            cout << "Thank you for using the Access Denied's Bank Account Management System. Goodbye!" << endl;
            break;
        default:
        cout<<"H";
            break;
        }   
    }
    return 0;
}