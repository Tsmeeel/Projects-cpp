#define CMPLX_H
#include <iostream>

class cmplx{
    private:
        double* x;
        double* y;
    public:
        //коструктор числа по умолчанию
        cmplx();
        //коструктор числа вводом
        cmplx(double  real, double imag);
        //оператор копирования
        cmplx(const cmplx& other);
        //оператор присваивания
        cmplx& operator=(const cmplx& other);
        //оператор сложения
        cmplx operator+(const cmplx& other)const;
        //оператор вычитания
        cmplx operator-(const cmplx& other)const;
        //оператор умножения
        cmplx operator*(const cmplx& other) const;
        //оператор деления
        cmplx operator/(const cmplx& other) const;
        //условие равенства
        bool operator==(const cmplx& other)const;
        //условие неравенства
        bool operator!=(const cmplx& other)const;
        //1е число больше 2го
        bool operator>(const cmplx& other)const;
        //1е число меньше 2го
        bool operator<(const cmplx& other)const;
        //оператор вывода
        friend std::ostream& operator<<(std::ostream& os, const cmplx& cmplx);
        //оператор ввода
        friend std::istream& operator>>(std::istream& is, cmplx& cmplx);
        //деструктор
        ~cmplx();
};

