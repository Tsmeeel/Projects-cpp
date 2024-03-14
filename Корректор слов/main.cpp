#include <iostream>
#include <iostream>
#include <string>
#include "dictionary.h"

using namespace std;

int main() {
    setlocale (LC_ALL,"rus");
    Dictionary dictionary;
    dictionary.loadDictionary("dictionary.txt");
    std::string inputWord;
    std::cout << "Enter a word: ";
    std::cin >> inputWord;
    dictionary.print(dictionary.getRoot(),0);
    cout<<endl;
    string y="";
    dictionary.final(dictionary.getRoot(),y,inputWord);
    int g=dictionary.check(y,inputWord);
    if ((g>=40)&&(g<100)){
        cout<<y;
    }else if(g<40){
        cout<<"There is no such word";
    }else if(g==100){
        cout<<"Ok";
    }
    return 0;
}
