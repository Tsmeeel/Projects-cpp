#pragma once

#include "root.h"

class linear : public root {
public:
    linear();
    linear(double koefa,double koefb);
    ~linear();
    linear(const linear& other);
    linear& operator=(const linear& other);
    void root1() override;
    void display() override;
private:
    double koefa;
    double koefb;
};
