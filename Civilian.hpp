#include "Human.hpp"
#ifndef CIVILIAN_HPP_
#define CIVILIAN_HPP_

class Civilian : public Human {
//TODO Implement Civilian Class
private:
	Civilian& operator=(const Civilian& other);
    	Civilian(const Civilian& other);
protected:
    	int debt;
public:
	Civilian(const std::string &name);
	int getDebt();
	void increaseDebt(int debt);
	void decreaseDebt(int debt);
};

#endif /* CIVILIAN_HPP_ */
