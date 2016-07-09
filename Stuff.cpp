#include "Stuff.h"

Stuff::Stuff() : m_name("junk"){}

Stuff::Stuff(std::string name) : m_name(name){}

std::string Stuff::getName()const{

    return m_name;

}

void Stuff::print(std::ostream &flux) const{

flux << m_name;


}

std::ostream &operator<<( std::ostream &flux, Stuff const& stuff)
{
    stuff.print(flux) ;
    return flux;
}

