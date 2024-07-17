#include <iostream>



int main() {
    int a ;
    int b ;
    int sum = 0;

    std::cout << "Please Enter Number " ;
    std::cin >> a ;

    while(a > 0){
        b = a % 10;  
        sum=sum+b;    
        a = a / 10;   
    }
    std::cout<<"Sum is = "<<sum<<std::endl;    
    return 0 ;
}