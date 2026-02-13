#pragma once


#include <string>

using namespace std;

class BankAccount {
	private:
		string owner;
		double balance;

	public:
		//constructor
		BankAccount(string name, double startingBalance);

		//setters
		void setOwner(string name);

        

        //getters
		double getBalance() const;
		string getOwner() const;

		//account action
		void deposit(double amount);
		void widthdraw(double amount);
		void transfer(double amount, BankAccount& recipient);
};