#include "Personnage.h"

Personnage::Personnage() : m_hp (100), m_maxHp (100), m_mp (100), m_maxMp (100)
{
}

Personnage::Personnage (std::string name) : m_name (name), m_hp (100), m_maxHp (100),
    m_mp (100), m_maxMp (100)
{
}

Personnage::Personnage (std::string name, int hp) : m_name(name), m_hp(hp)
{
}



void Personnage::takeDamage (int damage)
{
    std::cout<<"takeDamage de la classe Personnage"<<std::endl;
    m_hp = m_hp - damage;
    if (m_hp < 0)
        m_hp = 0;
}

/*
void Personnage::changeWeapon(std::string nameNewWeapon, int damageNewWeapon)
{
    weaponName=nameNewWeapon;
    weaponDamage=damageNewWeapon;
}*/

bool Personnage::isAlive() const
{
    return m_hp > 0;
}


