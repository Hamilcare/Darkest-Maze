#ifndef ORC_H_INCLUDED
#define ORC_H_INCLUDED
#include "Personnage.h"
#include "Hero.h"

class Orc : public Personnage{

    private :
    int m_damage;

    public :
        Orc(std::string name, int hp, int damage);
        void attack(Hero& target);






};


#endif // ORC_H_INCLUDED
