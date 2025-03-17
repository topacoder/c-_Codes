#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;

Account* findAccount(vector<Account*>& acc, int accNo){
	for(Account * i: acc){
		if(i -> getAccNo() == accNo) return i;
	}

	return nullptr;
}

int main(){
    vector<Account *> accounts;
	int choice;
	
	
	do{
		cout<<"---Banking System--- \n";
		cout<<"1: Open Account \n";
		cout<<"2: Show All Accounts \n";
		cout<<"3: Withdraw Amount \n";
		cout<<"4: Deposite Amount \n";
		cout<<"5: Exit \n";
		
		cin>>choice;

		switch(choice){
			case 1: {//open Account
				Account * acc = new Account();

				acc -> Accept();
				accounts.push_back(acc);
				break;
			}
			
			case 2: {//Display All accounts

				for(Account * i: accounts){
					i -> Display();
					cout<<" "<<endl;
				}

				break;
			
			}

			case 3: {//Withdraw amount

				int accNo;
				double amount;

				cout<<"Enter the account No \n";
				cin>>accNo;

				Account * acc = findAccount(accounts, accNo);

				if(acc){
					cout<<"Enter amount to withDraw \n";
					cin>>amount;

					acc -> withDraw(amount);
				}
				else{
					cout<<"Account not found \n";
				}

				break;
					
			}

			case 4: { //diposit amount
				int accNo;
				double amount;
				
				cout<<"Enter account no \n";
				cin>>accNo;

				Account * acc = findAccount(accounts, accNo);

				if(acc){
					cout<<"Enter amount to deposite \n";
					cin>>amount;

					acc -> diposite(amount);

				}
				else{
					cout<<"Account not found \n";
				}

				break;
			}
			
			case 5: {
				cout<<"Exiting... \n";
				break;	
			}


		}
	} while(choice != 5);

    return 0;
}