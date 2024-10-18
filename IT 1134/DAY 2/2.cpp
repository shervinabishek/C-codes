#include <iostream>
int main ()
{
    std::string city;
    std::string country;
    std::cout<<"Enter your city: ";
    std::cin>> city;
    std::cout<<"Enter your country: ";
    std::cin>> country;
    std::cout<<"You live in "<<city<<", "<<country;
    return 0;
}
