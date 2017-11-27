#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

using namespace std;

class account{
    double balance;
    string name;

    public:

        void addAmount(double amt);

        void withdrawAmount(double amt);

        int getBal();

        string getName();

        void printAllInfo();

        account(double initialBalance,string name);
};
#endif