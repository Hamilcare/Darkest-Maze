#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED

#include <string>
#include "Stuff.h"

class Weapon : public Stuff{

private :

    int m_damage;

public :
    Weapon();
    Weapon(std::string name, int damage);
    int getDamage()const;
    void print(std::ostream &flux) const;
};

std::ostream &operator<<( std::ostream &flux, Weapon const& weapon);



#endif // WEAPON_H_INCLUDED
