// Section 11 - 11.7 ~ 11.9
// Focus: hiding
#include <iostream>

class Base
{
protected: 
    int m_i;
public:
    Base(int i_in)
        : m_i(i_in) {}
    
    void print()
    {
        std::cout << "I'm based" << "\n";
    }

};

class Derived : public Base
{
private: 
    double m_d;
public:
    Derived(int value)
        : Base(value), m_d(0.0)
    {}
    using Base::m_i; // public으로 전환
private: 
    using Base::print; // ()없이
    void print() = delete;

};

int main() 
{
    Base b(5);
    b.print();

    Derived d(7);
    d.m_i = 1023;
    // d.print(); // 불가

    return 0;
}