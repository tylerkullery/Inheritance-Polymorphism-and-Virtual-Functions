#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck(std::string manufacturer, int yearBuilt, int towingCapacity);
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);
    void displayInfo() const;

private:
    int towingCapacity;
};

#endif // TRUCK_H
