// Section 13 - 13.1 ~ 13.4
// Focus: specialization
#include <iostream>

template<typename T>
const T& getMax(const T& x, const T& y)
{
    return (x > y) ? x : y;
}

template <>
const char& getMax(const char& x, const char& y)
{
    std::cout << "char comparing: ";
    return (x > y) ? x : y;
}

int main() 
{
    std::cout << getMax<double>(3, 4) << "\n";
    std::cout << getMax('a', 'c') << "\n";
    return 0;
}