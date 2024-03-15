#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    BinaryTree tree;
    int choice;
    do {
        cout << "Choose an action:" << endl;
        cout << "1-Add an element to the tree" << endl;
        cout << "2-Tree output" << endl;
        cout << "3-Get parent" << endl;
        cout << "4-Removing an element" << endl;
        cout << "0-Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int value;
            cout << "Enter a value to add to the tree: ";
            cin >> value;
            tree.insert(value);
            tree.createReverseLinks(tree.root, nullptr);
            break;
        }
        case 2: {
            tree.printTree();
            break;
        }
        case 3: {
            int value;
            cout << "Enter a value to get parent: ";
            cin >> value;
            TNode* foundNode = tree.search(tree.root, value);
            if (foundNode != nullptr) {
                cout << "Parent: " << foundNode->parent->data << endl;
            }
            break;
        }
        case 4: {
    int value;
    cin >> value;
    bool deleted = tree.remove(value);
    if (deleted) {
        cout << "The element was successfully removed from the tree." << endl;
    } else {
        cout << "Element not found in tree." << endl;
    }
    break;
}
        case 0: {
            cout << "Exit the program." << endl;
            break;
        }
        }
    } while (choice != 0);
}
