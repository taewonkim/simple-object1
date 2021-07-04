#include <iostream>

#include "unit.h"

void showHeader(void);
void showStatus(Unit* u);

int main(int argc, char** argv)
{
	Unit* u1 = new Unit(Identity(1), HealthPoint(), 6, Defence(0.2F));
	Unit* u2 = new Unit(Identity(2), HealthPoint(), 8);

	showHeader();
	showStatus(u1);
	showStatus(u2);

	u1->attack(u2);
	showHeader();
	showStatus(u1);
	showStatus(u2);

	u2->attack(u1);
	showHeader();
	showStatus(u1);
	showStatus(u2);
	u2->attack(u1);
	showHeader();
	showStatus(u1);
	showStatus(u2);

	return 0;
}

void showHeader(void)
{
	std::cout << "===" << std::endl;
}

void showStatus(Unit* u)
{
	std::cout << "[Unit " << u->get_id() << "]" << std::endl;
	u->showStatus();
}
