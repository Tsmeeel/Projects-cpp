#include "linear.h"
#include <cmath>
#include <iostream>
using namespace std;


linear::linear() {
    koefa = 0;
    koefb = 0;
}

linear::linear(double koefa, double koefb) : koefa(koefa), koefb(koefb) {}

linear::~linear(){
}

linear::linear(const linear& ur){
    koefa=ur.koefa;
    koefb=ur.koefb;
}

linear& linear::operator=(const linear& ur){
    koefa=ur.koefa;
    koefb=ur.koefb;
}

void linear::root1() {
    cout<< (-koefb) / koefa;
}

void linear::display() {
    cout << "Корень линейного уравнения: " << endl;
    root1();
}
