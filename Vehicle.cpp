#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(std::string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setManufacturer(const std::string &manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}
