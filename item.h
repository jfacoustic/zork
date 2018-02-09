#ifndef item
#define item
#include <iostream>
#include <string>

class Item {
public:
	Item();
	Item(std::string _name);
	~Item();
	void printName();
protected:
	std::string name;	
};

#endif
