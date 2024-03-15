#include <iostream>
#include "Lorry.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    Lorry lorry("Volvo", 6, 500, 2000);
    std::cout << "�� ���������������:" << std::endl;
    std::cout << "����� ���������: " << *lorry.getBrand() << std::endl;
    std::cout << "�������� ���������: " << *lorry.getPower() << std::endl;
    std::cout << "���������������� ���������: " << *lorry.getweight() << std::endl;
    std::cout << std::endl;

    lorry.setPower(600);
    lorry.updateweight(500);
    std::cout << "����� ���������������: " << std::endl;
    std::cout << "����� ���������: " << *lorry.getBrand() << std::endl;
    std::cout << "�������� ���������: " << *lorry.getPower() << std::endl;
    std::cout << "���������������� ���������: " << *lorry.getweight() << std::endl;

    std::cout << std::endl;

    Car car("Mercedes", 12, 800);
    std::cout << "�� ���������������:" << std::endl;
    std::cout << "����� ������: " << *car.getBrand() << std::endl;
    std::cout << "�������� ������: " << *car.getPower() << std::endl;
    std::cout << std::endl;
    car.upPower(50);

    std::cout << "����� ������� ���������:" << std::endl;
    std::cout << "����� ������: " << *car.getBrand() << std::endl;
    std::cout << "�������� ������: " << *car.getPower() << std::endl;
    std::cout << std::endl;

    Car car1(car);
    std::cout << "�����������" << std::endl;
    std::cout << "����� ������: " << *car.getBrand() << std::endl;
    std::cout << "�������� ������: " << *car.getPower() << std::endl;
    std::cout << std::endl;

    Lorry lorry1(lorry);
    std::cout << "������������" << std::endl;
    std::cout << "����� ������: " << *car.getBrand() << std::endl;
    std::cout << "�������� ������: " << *car.getPower() << std::endl;
    std::cout << std::endl;
    return 0;
}
