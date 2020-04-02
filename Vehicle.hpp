
#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_
#include <string>
#include <iostream>

class Vehicle {

private:
    	Vehicle& operator=(const Vehicle& other);
    	Vehicle(const Vehicle& other);
    	int vehicleCapacity;
    	std::string vehicleName;

public:
	Vehicle(const std::string &name, int capacity);
	int getCapacity() const;
	std::string getName() const;
	virtual ~Vehicle();
};

#endif /* VEHICLE_HPP_ */
