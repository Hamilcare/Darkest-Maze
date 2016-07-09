#ifndef HEALTHPOTION_H_INCLUDED
#define HEALTHPOTION_H_INCLUDED
#include "Stuff.h"

class HealthPotion : public Stuff{

private :
    int m_efficiency;

public :
    HealthPotion(std::string name, int efficiency);


};


#endif // HEALTHPOTION_H_INCLUDED
