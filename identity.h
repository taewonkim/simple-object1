#ifndef _H_ID_
#define _H_ID_

class Identity
{
public:
    Identity();
    Identity(const int identity_id);
    virtual ~Identity();
    int get_id() const;
private:
    const int identity_id;
};

#endif