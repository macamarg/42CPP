#ifndef HARL_HPP
# define HARL_HPP


# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>
# include <map>


class Harl
{
	public:
	Harl();
	~Harl( void );
	void complain( std::string level );//public member function

	
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	typedef void (Harl::*ComplaintFunction)(void);//defines Harl::*ComplaintFunction
	ComplaintFunction getFunction(const std::string& level);
};

/* 

	std::map is a sorted associative container (similar to a array of tuples) that contains
	key-value pairs with unique keys. Keys are sorted by using
	the comparison function Compare.

*/

#endif