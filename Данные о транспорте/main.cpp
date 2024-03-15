#include <iostream>
#include "Lorry.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    Lorry lorry("Volvo", 6, 500, 2000);
    std::cout << "Before redesignation:" << std::endl;
    std::cout << "Truck make: " << *lorry.getBrand() << std::endl;
    std::cout << "Truck Power: " << *lorry.getPower() << std::endl;
    std::cout << "Truck load capacity: " << *lorry.getweight() << std::endl;
    std::cout << std::endl;

    lorry.setPower(600);
    lorry.updateweight(500);
    std::cout << "After redesignation: " << std::endl;
    std::cout << "Truck make: " << *lorry.getBrand() << std::endl;
    std::cout << "Truck Power: " << *lorry.getPower() << std::endl;
    std::cout << "Truck load capacity: " << *lorry.getweight() << std::endl;

    std::cout << std::endl;

    Car car("Mercedes", 12, 800);
    std::cout << "Äî ïåðåîáîçíà÷åíèÿ:" << std::endl;
    std::cout << "Ìàðêà ìàøèíû: " << *car.getBrand() << std::endl;
    std::cout << "Ìîùíîñòü ìàøèíû: " << *car.getPower() << std::endl;
    std::cout << std::endl;
    car.upPower(50);

    std::cout << "Before redesignation:" << std::endl;
    std::cout << "Car make: " << *car.getBrand() << std::endl;
    std::cout << "Car power: " << *car.getPower() << std::endl;
    std::cout << std::endl;

    Car car1(car);
    std::cout << "After engine chipping" << std::endl;
    std::cout << "Car make: " << *car.getBrand() << std::endl;
    std::cout << "Car power: " << *car.getPower() << std::endl;
    std::cout << std::endl;

    Lorry lorry1(lorry);
    std::cout << "Assignment" << std::endl;
    std::cout << "Car make: " << *car.getBrand() << std::endl;
    std::cout << "Car power: " << *car.getPower() << std::endl;
    std::cout << std::endl;
    return 0;
}
