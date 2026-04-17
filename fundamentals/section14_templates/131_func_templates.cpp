// Section 13 - 13.1 ~ 13.4
// Focus: function templates
#include <iostream>
#include "Cents.h"

template<typename T>
const T& getMax(const T& x, const T& y)
{
    return (x > y) ? x : y;
}

int main() 
{
    std::cout << getMax(3, 4) << "\n";
    std::cout << getMax(3.14, 2.4) << "\n";
    std::cout << getMax(Cents(5), Cents(9)) << "\n";
    
    return 0;
}