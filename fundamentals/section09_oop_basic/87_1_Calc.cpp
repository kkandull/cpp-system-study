// Section 8 - 8.7 ~ 8.10
// Focus: class and header
#include "87_0_Calc.h"

Calc::Calc(int init_value)
        : m_value{init_value}
{}
Calc& Calc::add(int value) 
{ 
    m_value += value; 
    return *this;
}

Calc& Calc::sub(int value) 
{ 
    m_value -= value; 
    return *this;
}
Calc& Calc::mul(int value) 
{ 
    m_value *= value; 
    return *this;
}

void Calc::print() const
{
    std::cout << m_value << "\n";
}