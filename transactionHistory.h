#ifndef TRANSATIONHISTORY_H
#define TRANSATIONHISTORY_H

using namespace std;

struct Transaction{
    float time; //Current time in seconds since Jan 1 1970 from ctime function
    string type; //Type of transaction
};

bool recordTransaction(const Transaction* transaction);

#endif