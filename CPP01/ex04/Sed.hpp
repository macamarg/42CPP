#ifndef SED_HPP
# define SED_HPP


# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>


class Sed
{
	public:
	Sed(std::string filename, std::string s1, std::string s2);
	~Sed( void );

	public:
	std::string filename;
	std::string s1;
	std::string s2;
	
};

#endif