#include "HumanB.hpp"
# include "Weapon.hpp"

HumanB::HumanB(std::string	name): name(name), weapon(NULL)
{

}

HumanB::~HumanB( void )
{

}

void HumanB::attack(void) const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " punch!" << std::endl;
}
void HumanB::setWeapon(Weapon& weap)
{
	this->weapon = &weap;
}
