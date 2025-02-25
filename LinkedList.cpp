#include "LinkedList.h"
#include <iostream>
using namespace std; 
LinkedList::LinkedList() : head(nullptr) {}
LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
void LinkedList::insert(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}
bool LinkedList::search(int value) {
    Node* current = head;

    while (current) {
        if (current->data == value) {
            return true; 
        }
        current = current->next;
    }
    return false; 
}
void LinkedList::print() {
    if (!head) {
        cout << "empty list.\n";
        return;
    }
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << std::endl;
}
void LinkedList::bubbleSort() {
    if (head == nullptr) return;
    Node* lastSorted = nullptr;
    bool isSwapped;
    do {
        isSwapped = false;
        Node* current = head;
        while (current->next != lastSorted) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                isSwapped = true;
            }
            current = current->next;
        }
        lastSorted = current;
    } while (isSwapped); 
}
