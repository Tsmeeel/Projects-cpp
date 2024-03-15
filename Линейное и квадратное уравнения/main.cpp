#include "linear.h"
#include "square.h"
#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    root* p = new square(3.0, 7.0, -6.0);
    p->display();
    cout << endl;
    root* q = new linear(6.0, 3.0);
    q->display();
    cout << endl;
    /*root* x(q);
    x->display();
    cout << endl;
    root* y(p);
    p->display();
    root* x=q;
    q->display();*/
}
