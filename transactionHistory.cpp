#include <iostream>
#include <ctime>
#include "transactionhistory.h"

using namespace std;

struct Node{
    Node* next;
    Node* previous;
    Transaction transaction;
};

Node* head = NULL;
Node* startPoint = NULL;

bool recordTransaction(const Transaction* transaction){
    cout << "Time is " << transaction->time << endl;
    cout << "Head is pointing at " << head;
    Node* newNode = new Node; 
    newNode->transaction = *transaction;

    if(head==NULL){ // Check to see if history is empty, if so start it here
        cout << "No previous history found, starting history now" << endl;
        head = newNode;
        head->next = NULL;
        startPoint = newNode; // Startpoint will keep track of beginning of linked list
        return true;
    }
}