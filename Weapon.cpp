#include "Weapon.h"

Weapon::Weapon() : Stuff("Pic a brochette"),m_damage(5)
{
}


Weapon::Weapon(std::string name, int damage) : Stuff(name), m_damage(damage)
{
}


int Weapon::getDamage()const
{
    return m_damage;
}


void Weapon::print(std::ostream &flux) const{

flux <<"Name : " <<m_name << " Damage : "<<m_damage<<std::endl;

}

std::ostream &operator<<( std::ostream &flux, Weapon const& weapon)
{
    weapon.print(flux) ;
    return flux;
}
