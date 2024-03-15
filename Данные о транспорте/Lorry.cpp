#include "Lorry.h"

Lorry::Lorry(std::string brand, int cylinders, int power, int weight) : Car(brand, cylinders, power) {
    this->weight = new int(weight);
}

Lorry::Lorry(const Lorry& other):Car(other){
    weight=new int;
    *weight=*other.weight;
}

Lorry& Lorry::operator=(const Lorry& other){
    /*brand=*fh.brand;
    *cylinders=*fh.cylinders;
    *power=*fh.power;*/
    *weight=*other.weight;
}

Lorry::~Lorry() {
    delete weight;
}

int* Lorry::getweight() {
    return weight;
}

void Lorry::setBrand(std::string newBrand) {
    *this->getBrand() = newBrand;
}

void Lorry::updateweight(int weightIncrease) {
    *weight += weightIncrease;
}
