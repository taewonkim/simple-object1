#ifndef _H_UNIT_
#define _H_UNIT_

#include "identity.h"
#include "healthpoint.h"
#include "manapoint.h"
#include "defence.h"

class Unit
{
public:
	Unit(void);
	Unit(const Identity identity);
	Unit(const Identity identity, const HealthPoint healthpoint);
	Unit(const Identity identity, const HealthPoint healthpoint, const int power);
	Unit(const Identity identity, const HealthPoint healthpoint, const int power, const Defence defence);
	virtual ~Unit(void);
	int get_id(void) const;
	void attack(Unit* target);
	void showStatus(void);
private:
	int get_power(void) const;
private:
	const int power;
	const Identity identity;
	const Defence defence;
	HealthPoint healthpoint;
	ManaPoint manapoint;
};

#endif
