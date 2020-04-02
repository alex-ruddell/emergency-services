#include "Civilian.hpp"
#ifndef VICTIM_HPP_
#define VICTIM_HPP_

class Victim : public Civilian {
//TODO add members as needed
private:

    	Victim& operator=(const Victim& other);
    	Victim(const Victim& other);

public:
    bool treated;
   	int treatedCount;
	Victim(const std::string &name);
	bool isTreated();
	int getTreatedByAmount();
	void getTreated();
	virtual ~Victim();
};

#endif /* VICTIM_HPP_ */
