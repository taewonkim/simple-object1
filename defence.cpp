#include "defence.h"

Defence::Defence(void)
    : Defence(0.1F)
{
}

Defence::Defence(const double defence)
    : defence(defence)
{
}

Defence::~Defence()
{
}

double Defence::get_defence(void) const
{
    return this->defence;
}

int Defence::calc_defence(const int power) const
{
    int calc = int(power - (power * this->get_defence()));
    if(calc <= 0)
        calc = 0;
    return calc;
}