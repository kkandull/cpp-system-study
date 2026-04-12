// Section 11 - 11.4 ~ 11.6
// Focus: derived_class
#include <iostream>

class Base
{
protected: 
    int m_value;
public:
    Base(int value)
        : m_value(value) {}

};

class Derived : public Base
{
public:
    Derived(int value)
        : Base(value)
    {     
    }

    void setValue(int value)
    {
        Base::m_value = value;
    }
    friend std::ostream & operator << (std::ostream & out, const Derived & der)
    {
        out << der.m_value;
        return out;
    }
};

int main() 
{
    Derived der(1023);
    std::cout << der << "\n";
    return 0;
}