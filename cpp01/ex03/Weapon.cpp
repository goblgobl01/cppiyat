#include "Weapon.hpp"

Weapon:: Weapon() {}

void Weapon::setType(const std::string& ds) {
	type = ds;
}

const std::string Weapon::getType() const {
	return type;
}

Weapon:: Weapon(std::string type)
{
	setType(type);
}