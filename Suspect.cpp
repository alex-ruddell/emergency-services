#include "Suspect.hpp"

Suspect::Suspect(const std::string &name) : Civilian(name) {
	this->caughtCount = 0;
	this->caught = 0;
}

bool Suspect::isCaught(){
	return caught;
}

int Suspect::getCaughtByAmount(){
	return caughtCount;
}

Suspect::~Suspect() {
	// TODO Auto-generated destructor stub
}

