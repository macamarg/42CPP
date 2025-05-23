#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string	name, Weapon& weapon);
	~HumanA( void );
	void attack(void) const;
	
	private:
	std::string	name;
	Weapon* weapon;
	
};

#endif