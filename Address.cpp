#include "Address.hpp"
#include <string>
#include <iostream>
#include <sstream>

Address::Address(int number, std::string street, std::string suburb, std::string postcode){
	if (number <= 9 || number > 999) {
		number = 10;
	}
	this->number = number;

	int first = (postcode[0] >= 49 && postcode[0] <= 52);
	int second = (postcode[1] >= 49 && postcode[1] <= 52);
	int third = (postcode[2] >= 48 && postcode[2] <= 57);
	int fourth = (postcode[3] >= 48 && postcode[3] <= 57);
	int fifth = (postcode.size() == 4);

	if (first && second && third && fourth && fifth) {
		this->postcode = postcode;
	} else {
		this->postcode = "1111";
	}
	// can assume street and suburb will be in the correct format
	this->street = street;
	this->suburb = suburb;

}

void Address::changeAddressTo(int number, std::string street, std::string suburb, std::string postcode){
	if (number < 9 || number >= 999) {
			number = 10;
	}
	this->number = number;

	int first = (postcode[0] >= 49 && postcode[0] <= 52);
	int second = (postcode[1] >= 49 && postcode[1] <= 52);
	int third = (postcode[2] >= 48 && postcode[2] <= 57);
	int fourth = (postcode[3] >= 48 && postcode[3] <= 57);
	if (first && second && third && fourth) {
		this->postcode = postcode;
	} else {
		this->postcode = "1111";
	}
	// can assume street and suburb will be in the correct format
	this->street = street;
	this->suburb = suburb;
}

int Address::getNumber() {
	return this->number;
}

std::string Address::getPostcode() {
	return this->postcode;
}

std::string Address::getStreet() {
	return this->street;
}

std::string Address::getSuburb() {
	return this->suburb;
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

