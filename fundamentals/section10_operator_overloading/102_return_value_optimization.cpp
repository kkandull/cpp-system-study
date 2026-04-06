// Section 9 - 9.7 ~ 9.9
// Focus: overloading
#include <iostream>
#include <cassert>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den) { assert(den != 0); }

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

// RVO
Fraction doSomething()
{
    Fraction temp(1, 5);
    std::cout << &temp << "\n";
    return temp;
}

int main() 
{
    Fraction frac(3, 5);
    Fraction copy(frac);
    // Fraction copy2(Fraction(3,10)); -> Fraction copy2(3,10);
    // Fraction copy = frac;
    std::cout << frac << " " << copy << "\n";

    Fraction result = doSomething();
    // 컴파일러 최적화(RVO/NRVO) 여부와 빌드 설정에 따라 복사가 줄어들 수 있고, 주소도 같게 보일 수 있다.
    std::cout << &result << "\n";
    std::cout << result << "\n";

    return 0;
}