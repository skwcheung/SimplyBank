#include <iostream>
#include "account.h"

using namespace std;

account::account(double initialBalance,string name){
    balance = initialBalance;
    name = name;
}

void account::addAmount(double amt){
    balance += amt;
}   

void account::withdrawAmount(double amt){
    balance -= amt;
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
}

