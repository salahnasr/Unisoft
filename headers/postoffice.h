#ifndef POSTOFFICE_H
#define POSTOFFICE_H
#include "headers/administrator.h"
class postoffice : public Administrator
{
public:
    postoffice();
    postoffice(User Current_User);

};

#endif // POSTOFFICE_H
