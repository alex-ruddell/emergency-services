#include "Human.hpp"
#include <string>

Human::Human(const std::string &name) {
	this->name = name;
}

std::string Human::getName(){
	return this->name;
}

Human::~Human() {

}

