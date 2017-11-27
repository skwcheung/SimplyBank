#ifndef TRANSATIONHISTORY_H
#define TRANSATIONHISTORY_H
#include <time.h>

using namespace std;

class transactionHistory{
    public:
        time_t now;
        transactionHistory();

        // Contains transaction objects
        struct Transaction{
            long int time; //Current time in seconds since Jan 1 1970 from ctime function
            string type; //Type of transaction
        };

        // Node struct for linked list
        struct Node{
            Node* next;
            Node* previous;
            Transaction transaction;
        };

        Node* head;
        Node* startPoint;
        bool recordTransaction(const Transaction* transaction);

        void createTransaction(string type);

        void printTransactionHistory();
};



#endif