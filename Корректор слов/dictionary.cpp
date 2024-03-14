#include "dictionary.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

Dictionary::Dictionary() {
    root = nullptr;
}

Dictionary::~Dictionary() {
}

void Dictionary::print(Node* node, int indent) {
    if (node==nullptr){
        return;
    }
    print(node->right, indent+1);
    for (int i=0;i<indent; i++)cout <<'\t';
    cout<<node->word<<'\n';
    print(node->left,indent+1);
}

Node* Dictionary::getRoot(){
    return root;
}

Node* Dictionary::createNode(const std::string& word) {
    Node* newNode = new Node;
    newNode->word = word;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void Dictionary::insertNode(Node*& root, const std::string& word) {
    if (root == nullptr) {
        root = createNode(word);
    } else if (word < root->word) {
        insertNode(root->left, word);
    } else if (word > root->word) {
        insertNode(root->right, word);
    }
}

void Dictionary::loadDictionary(const std::string& filename) {
    std::ifstream dictionaryFile(filename);
    std::string word;
    while (dictionaryFile >> word) {
        insertNode(root, word);
    }
    dictionaryFile.close();
}

bool Dictionary::searchWord(const std::string& word) {
    Node* currentNode = root;
    while (currentNode != nullptr) {
        if (word == currentNode->word) {
            return true;
        } else if (word < currentNode->word) {
            currentNode = currentNode->left;
        } else {
            currentNode = currentNode->right;
        }
    }
    return false;
}

void Dictionary::final(Node* node,string& h,const std::string& word){
    if(node==nullptr){
        return;
    }
    int g1=check(h,word);
    int g2=check(node->word,word);
    if(g1<g2){
        h=node->word;
    }
    final(node->left,h,word);
    final(node->right,h,word);
}

int Dictionary::check(string h,const string& word){
    double maxMatch=0;
    int u;
    if (word.length()>h.length()){
        int k=0;
        while(k+h.length()<=word.length()){
            int match=0;
            int i=0,j=0;
            while (i<h.length()){
                if (h[i]==word[j+k]){
                    match++;
                }
                i++;
                j++;
            }
            k++;
            if(match>maxMatch){
                maxMatch=match;
            }
        }
        u=((maxMatch/word.length())*100);
    }else if (word.length()<=h.length()){
        int k=0;
        while(k+word.length()<=h.length()){
            int match=0;
            int i=0,j=0;
            while (i<word.length()){
                if (word[i]==h[j+k]){
                    match++;
                }
                i++;
                j++;
            }
            k++;
            if(match>maxMatch){
                maxMatch=match;
            }
        }
        u=((maxMatch/h.length())*100);
    }
    return u;
}
