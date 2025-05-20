#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
    Harl harl;
    
    if (argc == 2)  
        harl.complain(argv[1]);
    else
        std::cout << argv[0] << " takes ONE argument" << std::endl;
    
    return 0;
}