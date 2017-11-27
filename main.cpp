#include <iostream>
// #include "bank.h"
// #include "account.h"
#include "transactionHistory.h"
#include <time.h>
#include <Windows.h>

using namespace std;

int main(int argc,char* argv[]){
    //TODO Make list an empty array of account
    //account* accountList = NULL;
    //bank bank1(list);

    // Account testing 
    // account account1(100,"Steven");
    // account1.printAllInfo();
    // account1.addAmount(100);
    // account1.printAllInfo();

    // Timing test
    // time_t now;
    // cout << "Time is " << time(&now) << endl;
    // Sleep(1000);
    // cout << "Time is " << time(&now) << endl;
    // Sleep(1000);
    // cout << "Time is " << time(&now) << endl; 

    transactionHistory history;
    history.createTransaction("Add");
    history.createTransaction("Sub");
    history.createTransaction("Add");
    history.printTransactionHistory();
    return 1;
}