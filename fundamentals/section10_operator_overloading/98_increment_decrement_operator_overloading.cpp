// Section 9 - 9.4 ~ 9.6
// Focus: overloading
#include <iostream>

class Digit
{
private:
    int m_digit;
public:
    Digit(int digit = 0) : m_digit(digit) {}
    friend std::ostream& operator << (std::ostream& out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
    // prefix
    Digit & operator ++ ()
    {
        ++m_digit;
        return *this;
    }
    Digit & operator -- ()
    {
        --m_digit;
        return *this;
    }
    // post 
    Digit operator ++ (int)
    {
        Digit temp(m_digit);
        ++(*this);
        return temp;
    }
    Digit operator -- (int)
    {
        Digit temp(m_digit);
        --(*this);
        return temp;
    }
};

int main() 
{
    Digit d(5);
    std::cout << ++d << "\n";
    std::cout << d << "\n";
    std::cout << d++ << "\n";
    std::cout << d << "\n";
    
    std::cout << --d << "\n";
    std::cout << d << "\n";
    std::cout << d-- << "\n";
    std::cout << d << "\n";
    return 0;
}