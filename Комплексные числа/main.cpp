#include <iostream>
#include "cmplx.h"

using namespace std;

int main(){
    setlocale (LC_ALL,"rus");
    cmplx f1,f2;
    cin>>f1;
    cin>>f2;
    cmplx f3(f1);
    cout<<f3<<endl;
    cmplx f4=f1;
    cout<<f4<<endl;
    cmplx f5=f1+f2;
    cout<<"f5=f1+f2 "<<f5<<endl;
    cmplx f6=f1-f2;
    cout<<"f6=f1-f2 "<<f6<<endl;
    cmplx f7=f1*f2;
    cout<<"f7=f1*f2 "<<f7<<endl;
    cmplx f8=f1/f2;
    cout<<"f8=f1/f2 "<<f8<<endl;
    cout<<(f1==f2)<<endl;
    cout<<(f1!=f2)<<endl;
    cout<<"����������� ����� ������ ��������, ���������� �� ������"<<endl;
    cout<<(f1>f2)<<endl;
    cout<<(f1<f2)<<endl;
}
