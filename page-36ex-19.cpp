#include <iostream>
#include <cmath>

int main ()
{
    double a;
    double b;
    double c;
    
    std::cin >> a >> b >> c; 
    
    double perimeter = a + b + c;
    double surface = sqrt ((perimeter / 2) * ((perimeter / 2 )- a) * ((perimeter / 2) - b) * ((perimeter / 2) - c));
 
    double high = (2 * surface) / a;
    double sin_of_ab = (2 * surface) / (a * b);
    double cos_of_ab = sqrt(1 - sin_of_ab * sin_of_ab);

    std::cout << perimeter << " " << surface << " " << high << " " << sin_of_ab << std::endl;
    
    return 0;
}
