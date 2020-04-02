#include "Staff.hpp"

Staff::Staff(const std::string &name) : Human(name) {
	this->staffID = incrementStaffNumber();
	this->emergencyLocation = 0;
	this->jobComplete = false;
	this->jobAssigned = false;
}

int Staff::staffnum = 0;

int Staff::incrementStaffNumber() {
	return staffnum++;
}

void Staff::performJob(){
	jobComplete  = true;
}

void Staff::setAssigned(bool assigned){
	this->jobAssigned = assigned;
}

bool Staff::isAssigned(){
	if (emergencyLocation == 0) {
		return false;
	} else {
		return true;
	}
}

bool Staff::isJobComplete(){
	return jobComplete;
}

int Staff::getID(){
	return this->staffID;
}

void Staff::assignLocation(Address* address) {
	this->emergencyLocation = address;
}

Staff::~Staff() {
	// TODO Auto-generated destructor stub
}

