// Section 9 - 9.10 ~ 9.12
// Focus: overloading

#include <iostream>
#include <cassert>
class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(char) = delete;
    // explicit -> 암시적 형변환을 막음
    explicit Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den) { assert(den != 0); }

    Fraction(const Fraction &fraction) // copy construction
        : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        std::cout << "copy constructor called" << "\n";
    }

    friend std::ostream & operator << (std::ostream & out, const Fraction & f)
    {
        out << f.m_numerator << " / " << f.m_denominator;
        return out;
    }
};

void doSomething(Fraction franc)
{
    std::cout << franc << "\n";
}

int main() 
{
    doSomething(Fraction(7));
    // Fraction fc2 ('a'); -> delete로 막아버림 
    return 0;
}