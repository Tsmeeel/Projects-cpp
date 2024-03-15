#pragma once
#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

class Account{
private:
    string surname;
    int numb;
    double percent;
    double sum;
    Date data;
public:
    double x;
    Account();
    Account(string,int,double,double,Date);
    void Surname_change(string);
    void put_money(double);
    void get_money(double);
    void percent_data(unsigned int);
    void dollar();
    void euro();
    void get_surname();
    void get_number();
    void get_percent();
    void get_sum();
};
