#include <iostream>

int main ()
{
    int a;

    std::cin >> a ; 
    
    std::cout << "Volume = " << a * a * a << std::endl; 
    std::cout << "Leteral surface area = " << 4 * a * a  << std::endl; 

    return 0;
}
