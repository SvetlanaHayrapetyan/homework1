#include <iostream>
#include <cmath>
int main ()
{
    double a;
    double b;

    std::cin >> a >> b; 
    
    std::cout << "Perimetr = " << ( a + b ) * 2 << std::endl; 
    std::cout << "Surface = " <<  a * b << std::endl; 
    std::cout << "Diagonal = " << sqrt ( a * a + b * b ) << std::endl; 

    return 0;
}
