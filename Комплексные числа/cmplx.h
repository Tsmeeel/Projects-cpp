#define CMPLX_H
#include <iostream>

class cmplx{
    private:
        double* x;
        double* y;
    public:
        //default number constructor
        cmplx();
        //number input constructor
        cmplx(double  real, double imag);
        //copy operator
        cmplx(const cmplx& other);
        //assignment operator
        cmplx& operator=(const cmplx& other);
        //addition operator
        cmplx operator+(const cmplx& other)const;
        //subtraction operator
        cmplx operator-(const cmplx& other)const;
        //multiplication operator
        cmplx operator*(const cmplx& other) const;
        //division operator
        cmplx operator/(const cmplx& other) const;
        //equality condition
        bool operator==(const cmplx& other)const;
        //inequality condition
        bool operator!=(const cmplx& other)const;
        //1st number is greater than 2nd
        bool operator>(const cmplx& other)const;
        //1st number is less than 2nd
        bool operator<(const cmplx& other)const;
        //output operator
        friend std::ostream& operator<<(std::ostream& os, const cmplx& cmplx);
        //input operator
        friend std::istream& operator>>(std::istream& is, cmplx& cmplx);
        //destructor
        ~cmplx();
};

