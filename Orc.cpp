#include "Orc.h"


Orc::Orc(std::string name,int hp, int damage) : Personnage(name, hp), m_damage(damage)
{

}

void Orc::attack(Hero& target){

    target.takeDamage(m_damage);

}


