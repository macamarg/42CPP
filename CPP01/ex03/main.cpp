#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon rifle("bolt-action rifle");
	
	HumanA human1("Joel", rifle);
	HumanB human2("Dumb");

	human1.attack();
	rifle.setType("single-shot rifle");
	human1.attack();

	human2.attack();
	rifle.setType("bolt-action rifle");
	human2.setWeapon(rifle);
	human2.attack();
	rifle.setType("single-shot rifle");
	human2.attack();

	return(0);
}

/* 
int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return 0;
} */