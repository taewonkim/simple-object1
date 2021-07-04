#include "identity.h"

Identity::Identity()
    : Identity(0)
{
}

Identity::Identity(const int identity_id)
    : identity_id(identity_id)
{
}

Identity::~Identity()
{
}

int Identity::get_id(void) const
{
    return this->identity_id;
}