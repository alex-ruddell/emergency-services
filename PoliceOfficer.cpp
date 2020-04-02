#include "PoliceOfficer.hpp"
//TODO Implement the PoliceOfficer class


PoliceOfficer::PoliceOfficer(const std::string &name) : Staff(name) {
	this->assignedSuspect = 0;
}

void PoliceOfficer::assignSuspect(Suspect* suspect) {
	assignedSuspect = suspect;

}

Suspect* PoliceOfficer::getAssignedSuspect() {
	return assignedSuspect;
}


void PoliceOfficer::performJob() {
	if (assignedSuspect != 0) {
		assignedSuspect->caught = true;
		assignedSuspect->caughtCount += 1;
	}
	jobComplete = true;
}


PoliceOfficer::~PoliceOfficer() {
// destructor initialisation solves vtable error
}
