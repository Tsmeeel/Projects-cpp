#include <string>

class Car{
private:
    std::string* brand;
    int* cylinders;
    int* power;

public:
    Car(std::string brand, int cylinders, int power);
    virtual ~Car() {
        delete brand;
        delete cylinders;
        delete power;
    }
    Car(const Car& other);
    Car& operator=(const Car& other);
    std::string* getBrand();
    int* getPower();
    void setPower(int newPower);
    void upPower(int powerIncrease);
};
