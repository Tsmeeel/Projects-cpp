#include "Account.h"
#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date(){
    year=2000;
    month=1;
    day=1;
}

Date::Date(unsigned int _year,unsigned int _month,unsigned int _day){
    year=_year;
	month=_month;
	day=_day;
}
unsigned int Date::get_year(){
	return(year);
}
unsigned int Date::get_month(){
	return(month);
}
unsigned int Date::get_day(){
	return(day);
}
string Date::compare_date(Date sd){
	if (year==sd.year&&month==sd.month&&day==sd.day){
        return ("equal");
	}else if ((year>sd.year)||(year==sd.year&&month>sd.month)||(year==sd.year&&month==sd.month&&day>sd.day)){
	    return ("before");
	}else{
	    return ("after");
	}
}
unsigned int Date::amount_of_days(Date today) {
	unsigned int amount;
	amount=0;
	amount=(today.year*12*30+today.month*30+today.day)-(year*12*30+month*30+day);
	return amount;
}
