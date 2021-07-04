#ifndef _H_MANAPOINT_
#define _H_MANAPOINT_

class ManaPoint
{
public:
	ManaPoint();
	ManaPoint(const int healthpoint);
	virtual ~ManaPoint();
    void use(const unsigned int point);
    bool is_use(void) const;
    bool is_unuse(void) const;
	int get_manapoint(void) const;
private:
	int manapoint;
};

#endif
