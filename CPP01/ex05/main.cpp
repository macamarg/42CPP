#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;
    
    std::cout << "Harl's complaints:\n\n";
    
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    // Test with invalid level
    harl.complain("RANDOM");
    
    return 0;
}