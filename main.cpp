#include "main.h"
#include "Personnage.h"
#include "Hero.h"
#include "Orc.h"



int main()
{
    std::cout << "Hello world!" << std::endl;

    Hero kevin("Kevin");
    Personnage poteau("Poteau");
    Orc gnurf("Gnurf",20,7);
    gnurf.attack(kevin);



    return 0;
}


