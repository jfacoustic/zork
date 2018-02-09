#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <vector>


class Character {
	Character();
	~Character();
	void addToInv();
	int takeFromInv();
private:
	std::vector<int> inventory();
				
};

#endif
