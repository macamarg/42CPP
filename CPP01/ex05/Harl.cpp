# include "Harl.hpp"

Harl:: Harl( void ){}

Harl::~Harl( void ){}


// Find the function pointer and call the member function through the pointer
void Harl::complain( std::string level )
{
	ComplaintFunction func = getFunction(level);
	
	if (func)
		(this->*func)();
	else
		std::cout << "[ " << level <<  " ]: Boring" << std::endl;
}

//run the levels array searching the level and returns the function
Harl::ComplaintFunction Harl::getFunction(const std::string& level)
{
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ComplaintFunction functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
			return(functions[i]);
	}
	return NULL;
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]: This is unacceptable! I want to speak to the manager now." << std::endl;
}

