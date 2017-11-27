#include <iostream>
#include <time.h>
#include "transactionHistory.h"
#include <Windows.h>

using namespace std;

transactionHistory::transactionHistory(){
    head = NULL;
    startPoint = NULL;
}

void transactionHistory::createTransaction(string type){
    Transaction* t = new Transaction;
    t->time = time(&now);
    Sleep(1000); // Sleep 1 second to distinguish transaction times
    t->type = type;

    transactionHistory::recordTransaction(t);
}

bool transactionHistory::recordTransaction(const Transaction* transaction){
    cout << "Transaction type " << transaction->type << " at " << transaction->time << endl;
    cout << "Head is pointing at " << head << endl;
    Node* newNode = new Node; 
    newNode->transaction = *transaction;

    if(head==NULL){ // Check to see if history is empty, if so start it here
        cout << "No previous history found, starting history now" << endl;
        head = newNode;
        head->next = NULL;
        startPoint = head; // Startpoint will keep track of beginning of linked list
        cout << "First entry created. Head is now located at " << head << endl;
        cout << "Starting transaction is located at " << startPoint << endl;
        return true;
    }
    else{
        head->next = newNode; // Link the current node to the new node location
        newNode->previous = head; // Link new node to current node, establishing both way reference
        head = newNode; // Finally head points to new node
        head->next = NULL;
        cout << "Head is now pointing at " << head << endl;
    }
}

void transactionHistory::printTransactionHistory(){
    Node* searcher = startPoint;
    while(searcher != NULL){
        cout << "Transaction type " << searcher->transaction.type << " occured at time " << searcher->transaction.time << endl;
        searcher = searcher->next;
    }
    cout << "History complete " << endl;
}