#include "Car.h"

class Lorry : public Car {
private:
    int* weight;

public:
    Lorry(std::string brand, int cylinders, int power, int weight);
    ~Lorry();
    Lorry(const Lorry& other);
    Lorry& operator=(const Lorry& other);
    int* getweight();
    void setBrand(std::string newBrand);
    void updateweight(int weightIncrease);
};
