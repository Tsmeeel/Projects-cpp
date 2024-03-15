#pragma once
#define DATE_H
#include <iostream>
#include <string>

using namespace std;

class Date{
private:
    unsigned int year;
	unsigned int month;
	unsigned int day;
public:
    Date();
    Date(unsigned int,unsigned int,unsigned int);
    unsigned int get_year();
	unsigned int get_month();
	unsigned int get_day();
    unsigned int amount_of_days(Date);
    string compare_date(Date);
};
