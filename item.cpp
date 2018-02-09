#include "item.h"

Item::Item() {
	name = "";
}

Item::~Item() {

}

Item::Item(std::string _name) {
	name = _name;
}
void Item::printName() {
	std::cout << name << std::endl;
}
