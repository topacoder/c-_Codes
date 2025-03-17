#ifndef ___ACCOUNT_H___
#define ___ACCOUNT_H___

#include<iostream>
#include<vector>

using namespace std;

class Account{
    int accNo;
	double balance;
	
	
	public:

	//default ctor
	Account();


	//param ctor
	Account(int acc, int b);
    void Accept();
	void Display();
	void withDraw(double amount);
	void diposite(double amount);
	int getAccNo() const;
};

#endif