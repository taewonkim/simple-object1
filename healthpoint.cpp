#include <iostream>
#include <stdexcept>
#include "healthpoint.h"

HealthPoint::HealthPoint()
	: HealthPoint(100)
{
}

HealthPoint::HealthPoint(const int healthpoint)
	: healthpoint(healthpoint)
{
}

HealthPoint::~HealthPoint()
{
}

void HealthPoint::defence(const unsigned int power)
{
	if(power > 100)
		throw std::invalid_argument("too large argument");
	if(power < 0)
		this->healthpoint = 0;
	this->healthpoint -= power;
}

bool HealthPoint::is_live(void) const
{
	if(this->healthpoint > 0)
		return true;
	return false;
}

bool HealthPoint::is_die(void) const
{
	return !is_live();
}

int HealthPoint::get_healthpoint(void) const
{
	return this->healthpoint;
}
