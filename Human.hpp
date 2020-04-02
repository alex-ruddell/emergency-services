#include <string>
#ifndef HUMAN_HPP_
#define HUMAN_HPP_

class Human {
	//Add members as needed
private:
	
    	Human& operator=(const Human& other);
    	Human(const Human& other);
protected:
    	std::string name;
public:
	Human(const std::string &name);
	std::string getName();
	virtual ~Human();
};

#endif /* HUMAN_HPP_ */
