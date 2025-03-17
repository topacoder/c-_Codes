#include "Account.h"

Account::Account()
{
    accNo = 0;
    balance = 0;
}

Account::Account(int acc, int balance)
{
    accNo = acc;
    balance = balance;
}

void Account:: Accept()
{
    cout << "Enter your accNo \n";
    cin >> accNo;

    cout << "Enter your balance \n";
    cin >> balance;
}

void Account:: Display()
{
    cout << "Account number: " << accNo << endl;
    cout << "Available balance: " << balance << endl;
}

void Account:: withDraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawl successfull!!: remaining balance = " << balance << endl;
    }
    else
    {
        cout << "Invalid amount or insufficient amount\n";
    }
}

void Account:: diposite(double amount)
{
    if (amount > 0)
    {

        balance += amount;
        cout << "Amount diposited successfully remaining balance = " << balance << endl;
    }
    else
        cout << "invalid amount \n";
}

int Account:: getAccNo() const
{
    return accNo;
}