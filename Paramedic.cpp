#include "Paramedic.hpp"
//TODO Implement Paramedic Class

Paramedic::Paramedic(const std::string &name) : Staff(name) {
	this->assignedVictim = 0;
}

void Paramedic::assignVictim(Victim* victim) {
	this->assignedVictim = victim;
}

Victim* Paramedic::getAssignedVictim() {
	return assignedVictim;
}

void Paramedic::performJob() {
	if (assignedVictim != 0) {
		assignedVictim->treated = true;
		assignedVictim->treatedCount += 1;
	}
	jobComplete = true;
}


Paramedic::~Paramedic() {
	// destructor initialised
}
