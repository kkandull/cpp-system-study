// Section 9 - 9.7 ~ 9.9
// Focus: overloading
#include <iostream>

class Accumulator
{
private:
    int m_counter = 0;

public:
    int operator () (int i) { return (m_counter += i); }
};
int main() 
{
    Accumulator acc;
    std::cout << acc(10) << "\n"; // 10
    std::cout << acc(20) << "\n"; // 30
    
    return 0;
}