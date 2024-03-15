#include <iostream>
#include "tree.h"

TNode::TNode(const int& x) {
    data = x;
    left = nullptr;
    right = nullptr;
    parent = nullptr;
}

TNode* BinaryTree::insert(TNode* node, int& data) {
    if (node == nullptr) {
        return new TNode(data);
    }

    if (data < node->data) {
        node->left = insert(node->left, data);
    }
    else if (data > node->data) {
        node->right = insert(node->right, data);
    }
    return node;
}


void BinaryTree::printTree(TNode* node, int indent)
{
    if (node == nullptr) return;

    printTree(node->right, indent + 1);

        for (int i = 0; i < indent; i++) cout << '\t';
        cout << node->data << '\n';
    printTree(node->left, indent + 1);
}

TNode* BinaryTree::search(TNode* node, int& data) {
    if (node == nullptr)
        return nullptr;
    if (data < node->data)
        return search(node->left, data);
    else if (data > node->data)
        return search(node->right, data);
    else
        return node;
}
void BinaryTree::createReverseLinks(TNode* node, TNode* parent)
{
    if (node == nullptr) {
        return;
    }
    node->parent = parent;
    createReverseLinks(node->left, node);
    createReverseLinks(node->right, node);
}

bool BinaryTree::remove(int data) {
    TNode* node = findNode(root, data);
    if (node == nullptr) {
        return false;
    }
    deleteNode(node);
    return true;
}

TNode* BinaryTree::findNode(TNode* node, int data)
{    if (node==nullptr||node->data==data)
    {
        return node;
    }
    if (data<node->data)
    {
        return findNode(node->left,data);
    } else {return findNode(node->right,data);}
}
void BinaryTree::deleteNode(TNode* node) {
    if (node->left == nullptr && node->right == nullptr) {
        if (node->parent == nullptr) {
            root = nullptr;
        } else if (node->parent->left == node) {
            node->parent->left = nullptr;
        } else {
            node->parent->right = nullptr;
        }
        delete node;
    } else if (node->left == nullptr) {
        replaceNode(node, node->right);
    } else if (node->right == nullptr) {
        replaceNode(node, node->left);
    }
}

void BinaryTree::replaceNode(TNode* node, TNode* replacement) {
    replacement->parent = node->parent;
    if (node->parent == nullptr) {
        root = replacement;
    } else if (node->parent->left == node) {
        node->parent->left = replacement;
    } else {
        node->parent->right = replacement;
    }
    delete node;
}


BinaryTree::BinaryTree() : root(nullptr) {}

void BinaryTree::insert(int data) {
    root = insert(root, data);
}

bool BinaryTree::search(int data) {
    return search(root, data);
}

void BinaryTree::printTree() {
    printTree(root,0);
}
