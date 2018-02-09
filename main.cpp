#include <iostream>
#include "room.h"

using namespace std;

int main() {
	cout << "Welcome to JFAcoustic's Zork!" << endl;
	Room * test1 = new Room("Room 1", "This is the first room!");
	test1->getInfo();

	return 0;
}
