#include "Civilian.hpp"
#ifndef SUSPECT_HPP_
#define SUSPECT_HPP_

class Suspect : public Civilian{
//TODO Add members as needed
private:

    	Suspect& operator=(const Suspect& other);
    	Suspect(const Suspect& other);

public:
    int caughtCount;
    bool caught;
	Suspect(const std::string &name);
	bool isCaught();
	int getCaughtByAmount();
	virtual ~Suspect();
};

#endif /* SUSPECT_HPP_ */
