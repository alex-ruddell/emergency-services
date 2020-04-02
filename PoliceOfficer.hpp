#include "Staff.hpp"
#include "Suspect.hpp"
#ifndef POLICEOFFICER_HPP_
#define POLICEOFFICER_HPP_

class PoliceOfficer : public Staff {
// TODO add members as needed
private:
	PoliceOfficer& operator=(const PoliceOfficer& other);
        PoliceOfficer(const PoliceOfficer& other);
    Suspect* assignedSuspect;
public:
	PoliceOfficer(const std::string &name);
	void assignSuspect(Suspect* suspect);
	void performJob();
	Suspect* getAssignedSuspect();
	virtual ~PoliceOfficer();
};

#endif /* POLICEOFFICER_HPP_ */
