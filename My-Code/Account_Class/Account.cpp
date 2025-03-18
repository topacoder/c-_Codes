#include<iostream>
#include<vector>
using namespace std;

class Account{
    int accNo;
    double balance;

    public:

    Account(){
        cout<<"Default ctor called \n";
        accNo = 0;
        balance = 0.0;
    }

    Account(int accNo, double balance): accNo(accNo), balance(balance){
        cout<<"Parametrised ctor called \n";
    }

    void Accept(){
        cout<<"Enter your account number \n";
        cin>>accNo;
        cout<<"Enter your initial deposite \n";
        cin>>balance;
    }

    void Display(){
        cout<<"Your account balance is: "<<balance<<endl;
    }

    void deposite(double amount){
        balance += amount;
        cout<<"Amount deposited sucessfully \n";
        cout<<"Balance remaining: "<<balance;
    }

    void withdraw(double amount){
        if(balance > amount && amount > 0){
            balance -= amount;
            cout<<"Amount withdrawn successfully \n";
            cout<<"Available balance: "<<balance;
        }
        else{
            cout<<"Insufficient balance \n";
        }
    }

    int getAccNo(){
        return accNo;
    }

};

Account * findAccount(vector<Account* > &acc, int accNo){
    for(Account * i: acc){
        if(i -> getAccNo() == accNo) return i;
    }
}

int main()
{
    // Account * acc = new Account(); 
    // vector<Account*> accounts; //Dynamic memory is alwaysed accessed using *(pointers)
    // acc->Accept();

    // accounts.push_back(acc);

    // for(Account * i: accounts){
    //     i->Display();
    // }

    int choice;
    vector<Account * > accounts;

    cout<<"--Backing System-- \n";
    cout<<"1. Create Account \n";
    cout<<"2. Deposit \n";
    cout<<"3. Withdraw \n";
    cout<<"4. Display \n";
    cout<<"5. Exit \n";

    do{
        cout<<"Enter your choice \n";
        cin>>choice;

        switch(choice){
            case 1: { //creating new acc
                Account * acc = new Account();
                acc->Accept();
                break;
            }
            case 2: {//deposite amount
                int accNo;
                double amount;

                Account * acc = findAccount(accounts, accNo);

                if(acc){
                    cout<<"Enter the amount to be deposited \n";
                    cin>>amount;
                    acc -> deposite(amount);
                }
                break;
            }
            case 3: {
                int accNo;
                double amount;

                Account * acc = findAccount(accounts, accNo);

                if(acc){
                    cout<<"Enter the amount to be withdrawn \n";
                    cin>>amount;
                    acc -> withdraw(amount);
                    break;
                }
            }
            case  4: {

            }

            case 5: {
                cout<<"Exiting... \n";
                break;
            }
        }
    }while(choice != 5);
    return 0;
}