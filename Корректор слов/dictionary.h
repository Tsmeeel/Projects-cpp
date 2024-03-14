#include <string>

struct Node {
    std::string word;
    Node* left;
    Node* right;
};

class Dictionary {
public:
    Dictionary();
    ~Dictionary();
    void loadDictionary(const std::string& filename);
    bool searchWord(const std::string& word);
    //std::string correctWord(const std::string& word);
    int check(std::string h,const std::string& word);
    void print(Node* node, int indent);
    Node* getRoot();
    void final(Node* node,std::string& h,const std::string& word);
private:
    Node* root;
    Node* createNode(const std::string& word);
    void insertNode(Node*& root, const std::string& word);
};
