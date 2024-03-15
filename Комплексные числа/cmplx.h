#define CMPLX_H
#include <iostream>

class cmplx{
    private:
        double* x;
        double* y;
    public:
        //���������� ����� �� ���������
        cmplx();
        //���������� ����� ������
        cmplx(double  real, double imag);
        //�������� �����������
        cmplx(const cmplx& other);
        //�������� ������������
        cmplx& operator=(const cmplx& other);
        //�������� ��������
        cmplx operator+(const cmplx& other)const;
        //�������� ���������
        cmplx operator-(const cmplx& other)const;
        //�������� ���������
        cmplx operator*(const cmplx& other) const;
        //�������� �������
        cmplx operator/(const cmplx& other) const;
        //������� ���������
        bool operator==(const cmplx& other)const;
        //������� �����������
        bool operator!=(const cmplx& other)const;
        //1� ����� ������ 2��
        bool operator>(const cmplx& other)const;
        //1� ����� ������ 2��
        bool operator<(const cmplx& other)const;
        //�������� ������
        friend std::ostream& operator<<(std::ostream& os, const cmplx& cmplx);
        //�������� �����
        friend std::istream& operator>>(std::istream& is, cmplx& cmplx);
        //����������
        ~cmplx();
};

