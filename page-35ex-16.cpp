#include <iostream>
#include <cmath>
int main ()
{
    double a;
    double b;
    
    std::cin >> a >> b;
    std::cout << ( a + b ) / 2 << std::endl; // arithmetic mean
    std::cout <<  sqrt ( a * b ) << std::endl; //geometric mean
    

    return 0;
}
