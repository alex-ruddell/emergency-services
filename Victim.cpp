#include "Victim.hpp"

Victim::Victim(const std::string &name) : Civilian(name) {
	this->treatedCount = 0;
	this->treated = false;
}

bool Victim::isTreated(){
	return treated;
}

int Victim::getTreatedByAmount(){
	return treatedCount;
}

void Victim::getTreated() {
	this->treated = true;
}

Victim::~Victim() {
	// TODO Auto-generated destructor stub
}

