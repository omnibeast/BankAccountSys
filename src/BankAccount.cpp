#include "BankAccount.h"
#include <iostream>
#include <string>

BankAccount::BankAccount(string name, double startingBalance) {
    owner = name;
    if(startingBalance >= 0) {
        balance = startingBalance;
    } else {
        balance = 0;
    }
}

void BankAccount::setOwner(string name) {
    owner = name;
}

string BankAccount::getOwner() const {
    return owner;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
    } 
}
void BankAccount::widthdraw(double amount) {
    if(amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

void BankAccount::transfer(double amount) {

}