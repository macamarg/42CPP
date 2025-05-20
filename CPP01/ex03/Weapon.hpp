#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Weapon
{
	public:

	Weapon();
	Weapon(std::string type); // Parameterized constructor
	~Weapon();
	const std::string& getType( void ) const;
	void setType(std::string str);
	
	private:

	std::string	type;
};

#endif

//pass bay value means make a copy, so passing by ref means less memory space and more efficiency 
//const ref mens user can not modify 