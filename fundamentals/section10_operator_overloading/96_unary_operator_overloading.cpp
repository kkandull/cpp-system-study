// Section 9 - 9.1 ~ 9.3
// Focus: overloading
#include <iostream>
#include <fstream>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cent) : m_cents(cent) {}
    int getCents() const {return m_cents; }
    
    Cents operator -() const
    {
        return Cents(-m_cents);
    }
    bool operator ! () const 
    {
        return (m_cents == 0);
    }
    friend std::ostream& operator << (std::ostream& out, const Cents &cent)
    {
        out << cent.m_cents;
        return out;
    }

    
};


int main() 
{
    Cents cents1(6);
    Cents cents2(0);
    std::cout << cents1 << "\n";
    std::cout << -cents1 << "\n";
    std::cout << -Cents(-10) << "\n";

    std::cout << !cents1 << " " << !cents2 << "\n";
    return 0;
}