#include <iostream>
#include <stdexcept>
#include "manapoint.h"

ManaPoint::ManaPoint()
	: ManaPoint(100)
{
}

ManaPoint::ManaPoint(const int manapoint)
	: manapoint(manapoint)
{
}

ManaPoint::~ManaPoint()
{
}

void ManaPoint::use(const unsigned int point)
{
	if(point > 100)
		throw std::invalid_argument("too large argument");
	if(point < 0)
		this->manapoint = 0;
	this->manapoint -= point;
}

bool ManaPoint::is_use(void) const
{
	if(this->manapoint > 0)
		return true;
	return false;
}

bool ManaPoint::is_unuse(void) const
{
	return !this->is_use();
}

int ManaPoint::get_manapoint(void) const
{
	return this->manapoint;
}
