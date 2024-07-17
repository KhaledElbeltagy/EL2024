#include <iostream>


int main() {
    int num1 = 0 ;
    int num2 = 0 ;
    int num3 = 0 ;
    std::cout << "Please Enter the numbers to compare " <<std::endl ;
    std::cin >> num1 ;
    std::cin >> num2 ;
    std::cin >> num3 ;
    if(num1>num2 && num1 > num3){
        std::cout << num1 << " is greater input numbers from " << num2 <<" , " << num3 <<std::endl ;
    }
    else if (num2 > num1 && num2 > num3){

        std::cout << num2 << " is greater input numbers from " << num1 <<" , " << num3 <<std::endl ;
    }
    else 
    {    
        std::cout << num3 << " is greater input numbers from " << num1 <<" , " << num2 <<std::endl ;
    }
}