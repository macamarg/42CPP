# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>
# include "Sed.hpp"

// Create a program that takes three parameters in the following order: 
//a filename and two strings, s1 and s2
// handle unexpected inputs and error

/*

	
	

	check infile and open infile (std::ifstream inputFile(infile.c_str());)

	read file into string

	find s1 and replace with s2 to a new string(replace)

	create infile.replace and write replace string into it


*/
/* 
std::ifstream CheckFile(const std::string& filename, int& status)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        status = 2;
    }
	return(inputFile);
} */
	
//Check if S1 NULL or File is empty
int need_to_replace(std::string s1, std::string& content)
{
	int status;

	status = 0;
	if (s1.empty())
	{
		std::cout << "Warning: s1 is empty. No replacements will be made." << std::endl;
		status = 3;
	}
	else if (content.empty())
	{
		std::cout << "Warning: file is empty. No replacements will be made." << std::endl;
		status = 4;
	}
	return (status);
}

void replaceInFile(const std::string& filename, const std::string& s1,
	const std::string& s2, int &status)
{
	std::string content;
    std::string line;
	
	//open and check infile
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cout << filename << ": No such file or directory" << std::endl;
		status = 2;
	}
	else if (!inputFile.is_open())
	{
		std::cout << "Error: Could not open file " << filename << std::endl;
		status = 3;
	}
	else
	{
		//read file line by line to a string then close file
		while (std::getline(inputFile, line))
			content += line + "\n";
		inputFile.close();
		status = need_to_replace(s1, content);
		if (status == 0)
		{
			size_t pos;
			pos = content.find(s1, 0);
			while ((pos) != std::string::npos)
			{
				content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
				pos += s2.length();
				pos = content.find(s1, pos);
			}
		}
		std::ofstream outfile((filename + ".replace").c_str());
		if (!outfile.is_open())
		{
			std::cout << "Error: Could not create output file " << filename << ".replace" << std::endl; 
			status = 5;
		}
		else
		{
			outfile << content;
			outfile.close();
			std::cout << "Replacement complete. Output written to " << filename << ".replace" << std::endl;
		}
	}
}

/* 
	std::ifstream => Objects of this class maintain a filebuf object as their 
		internal stream buffer, which performs input/output operations on the
		file they are associated with (if any).

	std::ofstream => Output stream class to operate on files
		maintain a filebuf object as their internal stream buffer, 
		which performs input/output operations on the file they 
		are associated with (if any).
	
		if I need to mimic the original file I could 
		copy the original format flags and fill(methods inherited from the class)

*/

int	main(int argc, char **argv)
{
	int status;

	status = 0;
	if (argc == 4)
	{
		Sed arguments(argv[1], argv[2], argv[3]);
		//check file
		// std::ifstream infile = CheckFile(arguments.filename, status);
		replaceInFile(arguments.filename, arguments.s1, arguments.s2, status);

	} 
	else
	{
		std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;//return error
		status = 1;
	}
	return (status);
}