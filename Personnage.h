#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <iostream>
#include <string>
#include <ctime>//rand
#include <cstdlib>//rand


class Personnage{

    protected :


    std::string m_name;//Character's name
    int m_hp;//Current health point
    int m_maxHp;//Max health point
    int m_mp;// Current mana point
    int m_maxMp;// Max mana point


    public :
    Personnage();
    Personnage(std::string name);
	Personnage(std::string name, int hp);


    void takeDamage(int damage);
    bool isAlive() const;

};


#endif // PERSONNAGE_H_INCLUDED
