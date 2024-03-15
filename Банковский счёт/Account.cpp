#include "Account.h"
#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(){
    surname="";
    numb=1;
    percent=0.0;
    sum=0.0;
    Date data(2000,1,1);
}
Account::Account(string _surname,int _number,double _percent,double _sum,Date _data){
    surname=_surname;
    numb=_number;
    percent=_percent;
    sum=_sum;
    data=_data;
}
void Account::Surname_change(string new_surname){
    surname=new_surname;
}
void Account::put_money(double sum_){
    sum=sum+sum_;
}
void Account::get_money(double sum_){
    if(sum_>sum){
        cout<<"Not enough money"<<endl;
    }else{
        sum=sum-sum_;
    }
}
void Account::percent_data(unsigned int p){
    percent=percent+0.01*p;
    cout<<percent<<endl;
}
void Account::dollar(){
    x=0.0;
    x=sum/91.52;
    cout<<x<<" dollars"<<endl;
}
void Account::euro(){
    x=0.0;
    x=sum/97.99;
    cout<<x<<" euros"<<endl;
}
void Account::get_sum(){
    sum=sum+sum*(percent/100);
    cout<<sum<<endl;
}
