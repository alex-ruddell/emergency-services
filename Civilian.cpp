#include "Civilian.hpp"

Civilian::Civilian(const std::string &name) : Human(name) {
	this->name = name;
	this->debt = 0;
}

int Civilian::getDebt(){
	return this->debt;
}

void Civilian::increaseDebt(int debt){
	this->debt += debt;

}

void Civilian::decreaseDebt(int debt){
	int test = this->debt - debt;
	if (test >= 0) {
		this->debt = test;
	} else {
		this->debt = 0;
	}
}


