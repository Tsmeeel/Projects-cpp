#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    BinaryTree tree;
    int choice;
    do {
        cout << "�������� ��������:" << endl;
        cout << "1-�������� ������� � ������" << endl;
        cout << "2-����� ������" << endl;
        cout << "3-���������� parent" << endl;
        cout << "4-�������� ��������" << endl;
        cout << "0-�����" << endl;
        cout << "��� �����: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int value;
            cout << "������� �������� ��� ���������� � ������: ";
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
            cout << "������� �������� ��� ���������� parent: ";
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
        cout << "������� ������� ������ �� ������." << endl;
    } else {
        cout << "������� �� ������ � ������." << endl;
    }
    break;
}
        case 0: {
            cout << "����� �� ���������." << endl;
            break;
        }
        }
    } while (choice != 0);
}
