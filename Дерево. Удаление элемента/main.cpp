#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    BinaryTree tree;
    int choice;
    do {
        cout << "Выберите действие:" << endl;
        cout << "1-Добавить элемент в дерево" << endl;
        cout << "2-Вывод дерева" << endl;
        cout << "3-Нахождение parent" << endl;
        cout << "4-Удаление элемента" << endl;
        cout << "0-Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int value;
            cout << "Введите значение для добавления в дерево: ";
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
            cout << "Введите значение для нахождения parent: ";
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
        cout << "Элемент успешно удален из дерева." << endl;
    } else {
        cout << "Элемент не найден в дереве." << endl;
    }
    break;
}
        case 0: {
            cout << "Выход из программы." << endl;
            break;
        }
        }
    } while (choice != 0);
}
