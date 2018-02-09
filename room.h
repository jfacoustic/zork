#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <string>

//May need to be virtual, don't know yet.
class Room {
	public:
		Room();
		Room(std::string _name, std::string _story);
		~Room();
		void printNeighbors();
		void goToNeighbor(Room * neighbor);
		void getInfo();
		void loadInfo(std::string name, std::string story);
	private:
		//Room neighbors[4];
		std::string name;
		std::string story;

};

#endif
