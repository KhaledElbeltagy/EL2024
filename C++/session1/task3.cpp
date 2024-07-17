#include <iostream>
#include <math.h>


int main() {
    int a = 0 ;
    int b = 0 ;
    int c = 0 ;
    std::cout << "Please Triangle " <<std::endl ;
    std::cin >> a ;
    std::cin >> b ;
    std::cin >> c ;

    if(pow(a,2) + pow(b,2) == pow(c,2)){
        std::cout<< a << " , "<<  b << " , " << c <<" Right angels Triangles  " << std::endl ;
    }
    else if (pow(a,2) + pow(c,2) == pow(b,2)){

        std::cout<< a << " , "<<  b << " , " << c <<" Right angels Triangles  " << std::endl ;    
        }
    else if (pow(b,2) + pow(c,2) == pow(a,2)){
        
        std::cout<< a << " , "<<  b << " , " << c <<" Right angels Triangles  " << std::endl ;
    }
    else
    {
        std::cout<< a << " , "<<  b << " , " << c <<" NoT Right angels Triangles  " << std::endl ; 
    }
}