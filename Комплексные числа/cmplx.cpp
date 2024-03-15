#include "cmplx.h"
#include <iostream>
#include <cmath>

//default number constructor
cmplx::cmplx(): x(new double(0.0)), y(new double(0.0)){
}
//number input constructor
cmplx::cmplx(double  real, double imag){
    x=new double;
    y=new double;
    *x=real;
    *y=imag;
}
//copy operator
cmplx::cmplx(const cmplx& fh){
    x=new double;
    *x=*fh.x;
    y=new double;
    *y=*fh.y;
}
//assignment operator
cmplx& cmplx::operator=(const cmplx& fh){
    *x=*fh.x;
    *y=*fh.y;
}
//addition operator
cmplx cmplx::operator+(const cmplx& fh)const{
    double x1=*x+*fh.x;
    double y1=*y+*fh.y;
    return cmplx(x1,y1);
}
//subtraction operator
cmplx cmplx::operator-(const cmplx& fh)const{
    double x1=*x-*fh.x;
    double y1=*y-*fh.y;
    return cmplx(x1,y1);
}
//multiplication operator
cmplx cmplx::operator*(const cmplx& fh)const{
    double x1=*x**fh.x;
    double x2=*y**fh.y;
    double y1=*y**fh.x;
    double y2=*x**fh.y;
    double s1=x1-x2;
    double s2=y1+y2;
    return cmplx(s1,s2);
}
//division operator
cmplx cmplx::operator/(const cmplx& fh)const{
    double s1=(*x**fh.x+*y**fh.y)/(pow(*fh.x,2.0)+pow(*fh.y,2.0));
    double s2=(*fh.x**y-*x**fh.y)/(pow(*fh.x,2.0)+pow(*fh.y,2.0));
    return cmplx(s1,s2);
}
//equality condition
bool cmplx::operator==(const cmplx& fh)const{
    if((*x==*fh.x)&&(*y==*fh.y)){
        return true;
    }else{
        return false;
    }
}
//inequality condition
bool cmplx::operator!=(const cmplx& fh)const{
    if((*x!=*fh.x)||(*y!=*fh.y)){
        return true;
    }else{
        return false;
    }
}
//1st number is greater than 2nd
bool cmplx::operator>(const cmplx& fh)const{
    if((sqrt(pow(*x,2)+pow(*y,2)))>(sqrt(pow(*fh.x,2)+pow(*fh.y,2)))){
        return true;
    }else{
        return false;
    }
}
//1st number is less than 2nd
bool cmplx::operator<(const cmplx& fh)const{
    return ((sqrt(pow(*x,2)+pow(*y,2)))<(sqrt(pow(*fh.x,2)+pow(*fh.y,2))));
}
//output operator
std::ostream& operator<<(std::ostream& os,const cmplx& cmplx){
    if(*cmplx.x!=0.0){
        os <<*cmplx.x;
    }
    if(*cmplx.y==1.0){
        if(*cmplx.x!=0.0){
            os <<"+i";
        }else{
            os <<"i";
        }
    }else if(*cmplx.y<0.0){
        os <<*cmplx.y<<"i";
    }else{
        if(*cmplx.x!=0.0){
            os <<"+"<<*cmplx.y<<"i";
        }else{
            os <<*cmplx.y<<"i";
        }
    }
    return os;
}
//input operator
std::istream& operator>>(std::istream& is,cmplx& cmplx){
    is>>*cmplx.x>>*cmplx.y;
    return is;
}
//destructor
cmplx::~cmplx(){
    delete x;
    delete y;
}
