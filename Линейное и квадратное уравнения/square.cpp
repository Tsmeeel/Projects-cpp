#include <iostream>
#include "square.h"
#include <math.h>
using namespace std;

square::square() : koefa(0), koefb(0), koefc(0) {};square::square(double koefa, double koefb, double koefc)
    : koefa(koefa), koefb(koefb), koefc(koefc) {}

square::~square(){
}

square::square(const square& ur){
    koefa=ur.koefa;
    koefb=ur.koefb;
    koefc=ur.koefc;
}

square& square::operator=(const square& ur){
    koefa=ur.koefa;
    koefb=ur.koefb;
    koefc=ur.koefc;
}

void square::root1() {
    double dis = koefb * koefb - 4 * koefa*koefc;
    if (dis < 0) {
        cout<<"Нет корней";
    }
    if (dis >= 0) {
        double x1 = (((-koefb) + sqrt(dis)) / (2 * koefa));
        cout << x1;
        double x2 = (((-koefb) - sqrt(dis)) / (2 * koefa));
        cout << x2;
    }
}
void square::display() {
    cout << "Корни квадратного уравнения: " << endl;
    root1();
}
