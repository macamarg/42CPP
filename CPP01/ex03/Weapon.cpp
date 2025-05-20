#include "Weapon.hpp"

Weapon::Weapon() : type("")
{

}

Weapon::Weapon(std::string type): type(type) 
{

}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType( void )const
{
	return(type);
}

void Weapon::setType(std::string str)
{
	this->type = str;
}