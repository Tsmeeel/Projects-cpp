#pragma once
#include "root.h"

class square : public root {
public:
    square();
    square(double koefa, double koefb, double koefc);
    ~square();
    square(const square& other);
    square& operator=(const square& other);
    void root1() override;
    void display() override;
private:
    double koefa;
    double koefb;
    double koefc;
};
