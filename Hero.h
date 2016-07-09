#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include "Personnage.h"
#include "Weapon.h"

class Hero : public Personnage{

    private :
    Weapon m_weapon;
    int m_strength; //Affecte les dégats infligés
    int m_stamina; //Affecte les pv max
    int m_agility; //Affecte les chances de critique et de dodge
    int m_lvl;
    int m_xp;
	int m_nbPopo;


    public :
	Hero(std::string charName);
    Hero(std::string charName, std::string weaponName, int weaponDamage);
    void changeWeapon(std::string nameNewWeapon, int damageNewWeapon);
    void drinkHealthPotion(int potionStrength);
    void drinkManaPotion(int potionStrength);
	void attack(Personnage& target);
	bool isCritical();
	void takeDamage(int damage);







};



#endif // HERO_H_INCLUDED
