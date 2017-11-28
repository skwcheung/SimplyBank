#include <iostream>
#include "account.h"
#include "transactionHistory.h"

using namespace std;

account::account(double initialBalance,string name){
    balance = initialBalance;
    name = name;
    history = new transactionHistory();
}

void account::addAmount(double amt){
    balance += amt;
    history->createTransaction("Deposit",amt);
}   

void account::withdrawAmount(double amt){
    balance -= amt;
    history->createTransaction("Withdraw",amt);
}

int account::getBal(){
    return balance;
}

string account::getName(){
    return name;
}

void account::printAllInfo(){
    cout << "Account holder: " << account::getName() << endl;
    cout << "Current Balance: " <<account::getBal() << endl;
    history->printTransactionHistory();
}

