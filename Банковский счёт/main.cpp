#include "Account.h"
#include "Date.h"
#include <iostream>

using namespace std;

int main(){
    Date today(2023,11,21);
    Date B(2023,10,21);
    Account A("Kruchinin",52,5,2450,B);
    unsigned int n=B.amount_of_days(today);
    cout<<n<<endl;
    A.percent_data(n);
    A.get_sum();
    A.dollar();
    A.euro();
}
