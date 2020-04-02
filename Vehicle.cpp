#include "Vehicle.hpp"
#include <iostream>


Vehicle::Vehicle(const std::string &name, int capacity) {
	this->vehicleCapacity = capacity;
	this->vehicleName = name;
}

int Vehicle::getCapacity() const {
	return this->vehicleCapacity;
}

std::string Vehicle::getName() const {
	return this->vehicleName;
}


Vehicle::~Vehicle() {
	// TODO Auto-generated destructor stub
}

