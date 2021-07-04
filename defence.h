#ifndef _H_DEFENCE_
#define _H_DEFENCE_

class Defence
{
public:
    Defence(void);
    Defence(const double defnce);
    virtual ~Defence(void);
    double get_defence(void) const;
    int calc_defence(const int power) const;
private:
    const double defence;
};

#endif