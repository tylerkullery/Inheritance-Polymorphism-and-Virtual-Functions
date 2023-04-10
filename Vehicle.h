#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(std::string manufacturer, int yearBuilt);
    std::string getManufacturer() const;
    int getYearBuilt() const;
    void setManufacturer(const std::string &manufacturer);
    void setYearBuilt(int yearBuilt);
    void displayInfo() const;

private:
    std::string manufacturer;
    int yearBuilt;
};

#endif // VEHICLE_H
