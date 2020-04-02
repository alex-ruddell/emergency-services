#include "Address.hpp"
#include "Victim.hpp"
#include "Suspect.hpp"
#include "Staff.hpp"
#include <vector>
#ifndef EMERGENCY_HPP_
#define EMERGENCY_HPP_
enum Status {
	CRITICAL,
	ASSIGNED,
	TRANSPORTED,
	COMPLETED
};
//TODO Add members as needed
class Emergency {
private:
		std::vector<Staff*> assignedStaff;
    	Emergency& operator=(const Emergency& other);
    	Emergency(const Emergency& other);
    	Status status;
    	Victim* assignedVictim;
    	Suspect* assignedSuspect;
    	Address* assignedAddress;
public:
	Emergency(Address* address, Victim* victim, Suspect* suspect);
	Address* getAddress();
	Suspect* getSuspect();
	Victim* getVictim();
	Status getStatus();
	void setStatus(Status status);
	void assignStaff(Staff* staff);
	std::vector<Staff*> getAssignedStaff();
	bool resolve();
	virtual ~Emergency();
};

#endif /* EMERGENCY_HPP_ */
