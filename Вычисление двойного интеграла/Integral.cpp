#include <iostream>

using namespace std;

int sgn(double x, double y){
    if ((x * x + y * y - 4) > 0){
        return 1;
    }else{
        if ((x * x + y * y - 4) < 0){
            return -1;
        }else{
            return 0;
        }
    }
}

double integral(double split){
    double sum = 0;
    double x1 = -3, x2 = 3;
    double y1 = -3, y2 = 3;
    double xsplit = (x2 - x1) * split;
    double ysplit = (y2 - y1) * split;
    for (double x = x1; x <= x2; x += xsplit){
        for (double y = y1; y <= y2; y += ysplit){
            if ((x * x) + (y * y) <= 9){
                sum += xsplit * ysplit * sgn(x, y);
            }
        }
    }
    return sum;
}

int main(){
    double split = 0.0005;
    double num = integral(split);
    cout << endl << "Sum 1 is " << num;
    split = 0.0001;
    num = integral(split);
    cout << endl << "Sum 2 is " << num;
    split = 0.00005;
    num = integral(split);
    cout << endl << "Sum 3 is " << num;
}
