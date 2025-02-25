#include "LinkedList.h"
#include <iostream>
using namespace std; 
int main() {
    LinkedList list;
    int choice, value;

    while (true) {
        cout << "Type a number to do action\n";
        cout << "1 for insert\n";
        cout << "2 for search \n";
        cout << "3 for print\n";
        cout << "4 for sort\n";
        cout << "5 for exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number to insert: ";
                cin >> value;
                list.insert(value);
                break;
            case 2:
                cout << "Enter a number to search: ";
                cin >> value;
                if (list.search(value)) {
                    cout << "number found in the list.\n";
                } else {
                    cout << "number not found in the list.\n";
                }
                break;
                case 3:
                cout << "List: ";
                list.print();
                break;
            case 4: 
                list.bubbleSort();
                cout << "List sorted.\n";
                break;
            case 5:
                cout << "Exiting\n";
                return 0;
            default:
                cout << "Cannot do this please try something else.\n";
        }
    }
    return 0;
}