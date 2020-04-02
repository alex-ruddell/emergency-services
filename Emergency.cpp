#include "Emergency.hpp"

Emergency::Emergency(Address* address, Victim* victim, Suspect* suspect ) {
	setStatus(CRITICAL);
	this->assignedAddress = address;
	this->assignedSuspect = suspect;
	this->assignedVictim = victim;
}

Address* Emergency::getAddress(){
	return assignedAddress;
}

Suspect* Emergency::getSuspect(){
	return assignedSuspect;
}

Victim* Emergency::getVictim(){
	return assignedVictim;
}

Status Emergency::getStatus(){
	return this->status;
}

void Emergency::setStatus(Status status){
	this->status = status;
}

std::vector<Staff*> Emergency::getAssignedStaff(){
	return assignedStaff;
}

void Emergency::assignStaff(Staff* staff){
	if ((status == CRITICAL) || (status == ASSIGNED)) {
		assignedStaff.push_back(staff);
		staff->assignLocation(assignedAddress);
		staff->setAssigned(true);
		setStatus(ASSIGNED);
	}
}

bool Emergency::resolve(){
	if (status == COMPLETED) {
		return true;
	} else if (status == TRANSPORTED) {
		unsigned int i = 0;
		for (i = 0; i < assignedStaff.size(); i++) {
			assignedStaff[i]->performJob();
		}
		setStatus(COMPLETED);
		return true;
	} else {
		return false;
	}
}

Emergency::~Emergency() {
	// TODO Auto-generated destructor stub
}

