// Section 9 - 9.1 ~ 9.3
// Focus: overloading
#include <iostream>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cent) : m_cents(cent) {}
    int getCents() const {return m_cents; }
    int& getCents() {return m_cents; }
    
    // friend Cents operator + (const Cents &c1, const Cents &c2)
    Cents operator + (const Cents &c2) const
    {
        // return Cents(c1.getCents() + c2.getCents());
        return Cents(this->m_cents + c2.m_cents);
    }
};

/*Cents operator + (const Cents &c1, const Cents &c2)
{
    return Cents(c1.getCents() + c2.getCents());
}*/

int main() 
{
    using namespace std;
    
    Cents cents1(6);
    Cents cents2(8);

    std::cout << (cents1 + cents2 + Cents(6)).getCents() << "\n";
    return 0;
}