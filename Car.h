#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string manufacturer, int yearBuilt, int numberOfDoors);
    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);
    void displayInfo() const;

private:
    int numberOfDoors;
};

#endif // CAR_H
