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
            double amount;
            string type; //Type of transaction
        };

        // Node struct for linked list
        struct Node{
            Node* next;
            Node* previous;
            Transaction transaction;
        };

        // Nodes will be used to traverse linked list
        Node* head;
        Node* startPoint;

        // This function adds transcations to linked list
        bool recordTransaction(const Transaction* transaction);

        // Creates a transaction using input type as well as system time 
        void createTransaction(string type,double amount);

        // Function will start at earliest transaction and traverse through linked list to print transactions
        void printTransactionHistory();
};



#endif