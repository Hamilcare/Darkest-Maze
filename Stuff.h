#ifndef STUFF_H_INCLUDED
#define STUFF_H_INCLUDED

#include <string>
#include <iostream>

class Stuff{

protected :
    std::string m_name;

public :
    Stuff();
    Stuff(std::string name);
    std::string getName()const;
    void print(std::ostream &flux) const;

};

std::ostream& operator<<( std::ostream &flux, Stuff const& stuff);


#endif // STUFF_H_INCLUDED
