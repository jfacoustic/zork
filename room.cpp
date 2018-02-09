#include "room.h"



Room::Room() {

}

Room::~Room() {

}

Room::Room(std::string _name, std::string _story) {
	name = _name;
	story = _story;
}

void Room::getInfo() {
	std::cout << name << std::endl;
	std::cout << story << std::endl;	
}
