#include <iostream>
#include "bank.h"

using namespace std;

int main(int argc,char* argv[]){
    //TODO Make list an empty array of accounts
    char* list;
    bank bank1(list);
    cout << "This worked without crashing!";
    return 1;
}