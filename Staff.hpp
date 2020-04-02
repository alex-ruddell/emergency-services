#include "Human.hpp"
#include "Address.hpp"
#include "Civilian.hpp"

#ifndef STAFF_HPP_
#define STAFF_HPP_


class Staff : public Human {
//TODO Implement Human class
private:

	Staff& operator=(const Staff& other);
    	Staff(const Staff& other);
    static int staffnum;
protected:
    int staffID;
    bool jobAssigned;
    bool jobComplete;
    Address* emergencyLocation;
    std::string task;
public:
	Staff(const std::string &name);
	virtual void performJob();
	void setAssigned(bool assigned);
	bool isAssigned();
	bool isJobComplete();
	void assignLocation(Address* address);
	int getID();
	virtual ~Staff();
	int incrementStaffNumber();
};

#endif /* STAFF_HPP_ */
