#include "EmergencyServicesSystem.hpp"
#include <iostream>
#include <vector>

EmergencyServicesSystem::EmergencyServicesSystem() {
	staffCount = 0;
}


bool EmergencyServicesSystem::addEmergency(Emergency* emergency) {
	unsigned int i;
	for (i = 0; i < emergencyVector.size(); i++) {
		if (isSameAddress(emergencyVector[i]->getAddress(), emergency->getAddress())) {
			return false;
		}
	}
	emergencyVector.push_back(emergency);
	return true;
}

void EmergencyServicesSystem::incrementStaffCount() {
	staffCount++;
}

int EmergencyServicesSystem::emergencyIndex(Address* address) {
	unsigned int i;
	int index = -1;
	for (i = 0; i < emergencyVector.size(); i++) {
		if (isSameAddress(emergencyVector[i]->getAddress(), address) == true) {
			index = i;
		}
	}
	return index;
}


void EmergencyServicesSystem::hirePoliceOfficer(PoliceOfficer* policeOfficer) {
	policeArray.push_back(policeOfficer);
	incrementStaffCount();

}

void EmergencyServicesSystem::hireParamedic(Paramedic* paramedic) {
	paramedicArray.push_back(paramedic);
	incrementStaffCount();
}

void EmergencyServicesSystem::hireFireFighter(FireFighter* fireFighter) {
	fireArray.push_back(fireFighter);
	incrementStaffCount();
}

void EmergencyServicesSystem::buyVehicle(Vehicle* vehicle) {
	vehicleArray.push_back(vehicle);
}

bool EmergencyServicesSystem::isSameAddress(Address* address1, Address* address2) {
	int count = 0;
	if (address1->getNumber() == address2->getNumber()) {
		count++;
	}
	if (address1->getStreet() == address2->getStreet()) {
		count++;
	}
	if (address1->getPostcode() == address2->getPostcode()) {
		count++;
	}
	if (address1->getSuburb() == address2->getSuburb()) {
		count++;
	}
	if (count == 4) {
		return true;
	} else {
		return false;
	}
}

bool EmergencyServicesSystem::assignStaffToEmergency(Address* address, int numPoliceOfficers, int numParamedics, int numFireFighters) {
	unsigned int i;
	int index = emergencyIndex(address);
	if (index == -1) {
		return false;
	}
	if ((unsigned)numPoliceOfficers > policeArray.size()) {
		return false;
	}
	if ((unsigned)numParamedics > paramedicArray.size()) {
		return false;
	}
	if ((unsigned)numFireFighters > fireArray.size()) {
		return false;
	}
	for (i = 0; i < (unsigned)numPoliceOfficers; i++) {
		emergencyVector[index]->assignStaff(policeArray[i]);
	}
	for (i = 0; i < (unsigned)numFireFighters; i++) {
		emergencyVector[index]->assignStaff(fireArray[i]);
	}
	for (i = 0; i < (unsigned)numParamedics; i++) {
		emergencyVector[index]->assignStaff(paramedicArray[i]);
	}
	return true;
}

bool EmergencyServicesSystem::transportStaff(Address* address) {
	int index = emergencyIndex(address);
	if (index == -1) {
		return false;
	}
	if (staffCount == 0) {
		return false;
	}
	int totalVehicleCapacity = 0;
	unsigned int i;
	for (i = 0; i < vehicleArray.size(); i++) {
		totalVehicleCapacity = totalVehicleCapacity + vehicleArray[i]->getCapacity();
	}
	if (staffCount > totalVehicleCapacity) {
		return false;
	}
	emergencyVector[index]->setStatus(TRANSPORTED);
	return true;
}

bool EmergencyServicesSystem::resolveEmergency(Address* address) {
	int index = emergencyIndex(address);
	if (index == -1) {
		return false;
	}
	if (emergencyVector[index]->getStatus() != TRANSPORTED) {
		return false;
	}
	return emergencyVector[index]->resolve();
}

int EmergencyServicesSystem::getStaffCount() {
	return staffCount;
}

std::string EmergencyServicesSystem::author(){
	return "arud699";
}

// TODO implement all the other methods and destructor for EmergencyServicesSystem

EmergencyServicesSystem::~EmergencyServicesSystem(){

}

