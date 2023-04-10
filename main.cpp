#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
    std::string manufacturer;
    int yearBuilt, numberOfDoors, towingCapacity;

    // Get user input for a generic Vehicle
    std::cout << "Enter manufacturer: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built: ";
    std::cin >> yearBuilt;

    // Create a Vehicle object and display its information
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    // Get user input for a Car
    std::cout << "Enter manufacturer for the car: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built for the car: ";
    std::cin >> yearBuilt;
    std::cout << "Enter number of doors: ";
    std::cin >> numberOfDoors;

    // Create a Car object and display its information
    Car car(manufacturer, yearBuilt, numberOfDoors);
    car.displayInfo();

    // Get user input for a Truck
    std::cout << "Enter manufacturer for the truck: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built for the truck: ";
    std::cin >> yearBuilt;
    std::cout << "Enter towing capacity (lbs): ";
    std::cin >> towingCapacity;

    // Create a Truck object and display its information
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    return 0;
}
