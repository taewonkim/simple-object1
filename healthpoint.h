#ifndef _H_HEALTHPOINT_
#define _H_HEALTHPOINT_

class HealthPoint
{
public:
	HealthPoint();
	HealthPoint(const int healthpoint);
	virtual ~HealthPoint();
	void defence(const unsigned int power);
	bool is_live(void) const;
	bool is_die(void) const;
	int get_healthpoint(void) const;
private:
	int healthpoint;
};

#endif
