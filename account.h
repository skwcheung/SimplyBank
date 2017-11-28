#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "transactionHistory.h"

using namespace std;

class account{
    double balance;
    string name;
    transactionHistory* history;

    public:

        void addAmount(double amt);

        void withdrawAmount(double amt);

        int getBal();

        string getName();

        void printAllInfo();

        account(double initialBalance,string name);
};
#endif