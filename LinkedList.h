#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node* head; 

public:
    LinkedList();  
    ~LinkedList(); 

    void insert(int value); 
    bool search(int value); 
    void print();
    void bubbleSort();       
};

#endif 