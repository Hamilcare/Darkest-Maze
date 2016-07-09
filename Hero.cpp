#include "Hero.h"


Hero::Hero (std::string charName) : Personnage(charName), m_weapon(Weapon()), m_strength(0), m_stamina(0), m_agility(0), m_lvl(1), m_xp(0),m_nbPopo(3)
{
}


Hero::Hero (std::string charName, std::string weaponName,
            int weaponDamage) : Personnage(charName), m_weapon(Weapon(weaponName, weaponDamage)), m_strength(0), m_stamina(0), m_agility(0), m_lvl(1), m_xp(0),m_nbPopo(3)
{
}


void Hero::drinkHealthPotion (int potionStrength)
{
    if(m_nbPopo > 0){
    m_hp = m_hp + potionStrength;
    if (m_hp > m_maxHp)
        m_hp = m_maxHp;
    std::cout<<"Vous buvez une potion qui vous rend "<<potionStrength<<" points de vie"<<std::endl;
    std::cout<<"Vous avez maintenant "<<m_hp<< " points de vie"<<std::endl;
    }

}

void Hero::drinkManaPotion (int potionStrength)
{
    m_mp = m_mp + potionStrength;
    if (m_mp > m_maxMp)
        m_mp = m_maxMp;
}

void Hero::attack(Personnage& target)
{

    int inflictedDamage = m_weapon.getDamage();
    double statModifier = 1 + m_strength/10;
    inflictedDamage*=statModifier;
    if(isCritical())
    {
        std::cout<<"Coup critique !"<<std::endl;
        inflictedDamage*=2;
    }

    target.takeDamage(inflictedDamage);

}


bool Hero::isCritical()
{
    int rnd = std::rand()%101;
    return rnd > 95-m_agility;

}

void Hero::takeDamage(int damage)
{

    std::cout<<"takeDamage de la classe Hero"<<std::endl;

    if(isCritical())
    {
        std::cout<<"Full Dodge !"<<std::endl;
    }
    else
    {

        m_hp = m_hp - damage;
        if (m_hp < 0)
            m_hp = 0;

    }

}
