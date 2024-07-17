#include <iostream>
#include <iomanip>

int main() {

int i ;


std::cout << " ASCII Code Table : " << std::endl ;
std::cout << " +--------+--------+" << std::endl ;
std::cout << " | " << " char " << " | " << " ASCII " << "|" << std::endl;
std::cout << " +--------+--------+" << std::endl ;


for (i = 0 ; i <= 105 ; i++) {
    if (i <= 32)
    std::cout << " |   " << "   "  << "  |  " << std::setw(4) << i <<  "    |   " <<  std::endl;  
    else
    std::cout << " |   " << (char)i  << "    |   " << std::setw(3) << i <<  "    |   " <<  std::endl;
    
}

return 0 ;
}

