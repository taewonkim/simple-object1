#include <iostream>
#include <stdexcept>
#include "unit.h"

Unit::Unit(void)
	: Unit(Identity())
{
}

Unit::Unit(const Identity identity)
	: Unit(identity, HealthPoint(), 5)
{
}

Unit::Unit(const Identity identity, const HealthPoint healthpoint)
	: Unit(identity, healthpoint, 5)
{
}

Unit::Unit(const Identity identity, const HealthPoint healthpoint, const int power)
	: Unit(identity, healthpoint, power, Defence())
{
}

Unit::Unit(const Identity identity, const HealthPoint healthpoint, const int power, const Defence defence)
	: identity(identity), healthpoint(healthpoint),  power(power), defence(defence)
{
}

Unit::~Unit(void)
{
}

int Unit::get_id(void) const
{
	return this->identity.get_id();
}

void Unit::showStatus(void)
{
	std::cout << "Health Point: " << this->healthpoint.get_healthpoint() << ", " << "Mana Point: " << this->manapoint.get_manapoint() << std::endl;
	std::cout << "Defence: " << this->defence.get_defence() << std::endl;
	std::cout << "Calculate Power: " << this->get_power() << std::endl;
}

void Unit::attack(Unit* target)
{
	if(target == NULL)
		throw std::invalid_argument("target is null!");
	this->healthpoint.defence(this->get_power());
}

int Unit::get_power(void) const
{
	return this->defence.calc_defence(this->power);
}
