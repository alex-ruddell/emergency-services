#include <vector>
#include <iostream>
#include "PoliceOfficer.hpp"
#include "FireFighter.hpp"
#include "Paramedic.hpp"
#include "Emergency.hpp"
#include "Vehicle.hpp"

#ifndef EMERGENCYSERVICESSYSTEM_HPP_
#define EMERGENCYSERVICESSYSTEM_HPP_

class EmergencyServicesSystem {
	//TODO Add members as needed
private:

	std::vector<Emergency*> emergencyVector;
	int staffCount;
	std::vector<PoliceOfficer*> policeArray;
	std::vector<FireFighter*> fireArray;
	std::vector<Paramedic*> paramedicArray;
	std::vector<Vehicle*> vehicleArray;
public:
	EmergencyServicesSystem();
	static std::string author();
	void hirePoliceOfficer(PoliceOfficer* policeOfficer);
	void hireParamedic(Paramedic* paramedic);
	void hireFireFighter(FireFighter* fireFighter);
	bool addEmergency(Emergency* emergency);
	void buyVehicle(Vehicle* vehicle);
	bool isSameAddress(Address* address1, Address* address2);
	bool assignStaffToEmergency(Address* address, int numPoliceOfficers, int numParamedics, int numFireFighters);
	bool transportStaff(Address* address);
	int emergencyIndex(Address* address);
	bool resolveEmergency(Address* address);
	void incrementStaffCount();

	int getStaffCount();


	virtual ~EmergencyServicesSystem();
};

#endif /* EMERGENCYSERVICESSYSTEM_HPP_ */
