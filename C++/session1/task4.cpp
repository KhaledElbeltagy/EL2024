#include <iostream>



int main() {
    char letter ;
    char viowel [11]={'a', 'i', 'e', 'o', 'u', 'A', 'I', 'E', 'O', 'U','\n'} ;
    std::cout << "Enter The Letter to check if it is vowel" << std::endl ;
    std::cin >> letter ;
    if (!isalpha(letter)){
        std::cout << "Error: Input is not a letter." << std::endl ;
        return 0 ;
    }
    else 
    {
        for (int i = 0; i <11; ++i) {
            if (viowel[i] == letter )
            {
                std::cout << "The letter " << letter << " is a vowel." << std::endl ;
                break ;
            }
            else{
                std::cout << "The letter " << letter << " is not a vowel." << std::endl ;
                break  ;
            }
        }
    }
    return 0 ;
}