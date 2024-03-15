#include "Car.h"
#include <string>

Car::Car(std::string brand, int cylinders, int power) {
    this->brand = new std::string(brand);
    this->cylinders = new int(cylinders);
    this->power = new int(power);
}

Car::Car(const Car& fh){
    brand=new std::string;
    *brand=*fh.brand;
    cylinders=new int;
    *cylinders=*fh.cylinders;
    power=new int;
    *power=*fh.power;
}

Car& Car::operator=(const Car& fh){
    *brand=*fh.brand;
    *cylinders=*fh.cylinders;
    *power=*fh.power;
}

std::string* Car::getBrand() {
    return brand;
}

int* Car::getPower() {
    return power;
}

void Car::setPower(int newPower) {
    *power = newPower;
}

void Car::upPower(int powerIncrease) {
    *power += powerIncrease;
}
