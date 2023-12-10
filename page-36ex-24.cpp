#include <iostream>
#include <iomanip>

int main()
{
    int year; 
    int age;
    std::cin >> year;
    std::cin >> age;
    double result;
    result = (double)((year*2 + 5)*50 + age - 250)/100;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << result << std::endl;
    
    return 0;
}
