#include <iostream>
#include "Lorry.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    Lorry lorry("Volvo", 6, 500, 2000);
    std::cout << "До переобозначения:" << std::endl;
    std::cout << "Марка грузовика: " << *lorry.getBrand() << std::endl;
    std::cout << "Мощность грузовика: " << *lorry.getPower() << std::endl;
    std::cout << "Грузоподъёмность грузовика: " << *lorry.getweight() << std::endl;
    std::cout << std::endl;

    lorry.setPower(600);
    lorry.updateweight(500);
    std::cout << "После переобозначения: " << std::endl;
    std::cout << "Марка грузовика: " << *lorry.getBrand() << std::endl;
    std::cout << "Мощность грузовика: " << *lorry.getPower() << std::endl;
    std::cout << "Грузоподъёмность грузовика: " << *lorry.getweight() << std::endl;

    std::cout << std::endl;

    Car car("Mercedes", 12, 800);
    std::cout << "До переобозначения:" << std::endl;
    std::cout << "Марка машины: " << *car.getBrand() << std::endl;
    std::cout << "Мощность машины: " << *car.getPower() << std::endl;
    std::cout << std::endl;
    car.upPower(50);

    std::cout << "После чиповки двигателя:" << std::endl;
    std::cout << "Марка машины: " << *car.getBrand() << std::endl;
    std::cout << "Мощность машины: " << *car.getPower() << std::endl;
    std::cout << std::endl;

    Car car1(car);
    std::cout << "Копирование" << std::endl;
    std::cout << "Марка машины: " << *car.getBrand() << std::endl;
    std::cout << "Мощность машины: " << *car.getPower() << std::endl;
    std::cout << std::endl;

    Lorry lorry1(lorry);
    std::cout << "Присваивание" << std::endl;
    std::cout << "Марка машины: " << *car.getBrand() << std::endl;
    std::cout << "Мощность машины: " << *car.getPower() << std::endl;
    std::cout << std::endl;
    return 0;
}
