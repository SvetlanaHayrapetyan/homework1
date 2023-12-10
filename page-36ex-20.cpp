#include <iostream>
#include <cmath>

int main ()
{
    double a;
    double b;
    
    std::cin >> a >> b ; 
    
    std::cout << "Surface = " << (a * b) / 2 << std::endl;
    std::cout << "Triangle = " << sqrt (a * a + b * b) << std::endl;
    
    return 0;
}
