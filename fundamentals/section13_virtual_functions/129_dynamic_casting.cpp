// Section 12 - 12.8 ~ 12.11
// Focus: dynamic casting
#include <iostream>
#include <string>

class Base
{
public:
    int m_i = 0;
    virtual void print()
    {
        std::cout << "Base" << "\n";
    }
    virtual ~Base() = default;
};

class Derived1 : public Base
{
public:
    int m_j = 1024;
    virtual void print() override
    {
        std::cout << "Derived1" << "\n";
    }
};

class Derived2 : public Base 
{
public:
    std::string m_name = "Jack";
    virtual void print() override
    {
        std::cout << "Derived2" << "\n";
    }
};

int main()
{
    Derived1 d1;
    Base *b = &d1;

    auto *base_to_di = dynamic_cast<Derived1*>(b);
    base_to_di->m_j = 1000;

    if ( base_to_di != nullptr )
        std::cout << base_to_di->m_j << "\n";
    else 
        std::cout << "Failed" << "\n";
    return 0;

}