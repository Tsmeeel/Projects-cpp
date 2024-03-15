#pragma once

using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;
    TNode *parent;
    TNode(const int& x);
};
class BinaryTree {
    TNode* insert(TNode* node, int& x);
    void printTree(TNode* node, int indent);


public:
    bool remove(int data);
    TNode* findNode(TNode* node, int data);
    void deleteNode(TNode* node) ;
    void replaceNode(TNode* node, TNode* replacement);
    TNode* search(TNode* node, int& data);
    TNode* root;
    void createReverseLinks(TNode* node, TNode* parent);
    BinaryTree();
    void insert(int x);
    void printTree();
    bool search(int data);
};
