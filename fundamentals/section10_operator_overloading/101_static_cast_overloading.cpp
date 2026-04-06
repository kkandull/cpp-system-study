// Section 9 - 9.7 ~ 9.9
// Focus: overloading
#include <iostream>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents = 0) : m_cents(cents) {}
    
    int getCents() const {return m_cents;}

    operator int() const
    {
        std::cout << "Cast here" << "\n";
        return m_cents;
    }
};

class Dollar
{
private:
    int m_dollars = 0;
public:
    Dollar(const int& input) : m_dollars(input) {}
    
    operator Cents() const
    {
        return Cents(m_dollars * 100);
    }
};


void printInt(const int& value)
{
    std::cout << value << "\n";
}

int main() 
{
    Dollar doll(20);
    Cents cents = doll;
    printInt(cents);

    Cents cent(7);
    // value = static_cast<int>(cent);
    printInt(cent);
    
    
    return 0;
}