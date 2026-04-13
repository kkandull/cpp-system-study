// Section 11 - 11.7 ~ 11.9
// Focus: overriding
#include <iostream>

class Base
{
protected: 
    int m_value;
public:
    Base(int value)
        : m_value(value) {}
    void print()
    {
        std::cout << "I'm based" << "\n";
    }
    friend std::ostream & operator << (std::ostream & out, const Base & b)
    {
        out << "This is base output" << "\n";
        return out;
    }

};

class Derived : public Base
{
public:
    Derived(int value)
        : Base(value)
    {}

    void print()
    {
        Base::print();
        std::cout << "I'm Derived" << "\n";
    }
    friend std::ostream & operator << (std::ostream & out, const Derived &d)
    {
        std::cout << static_cast<const Base&>(d);
        out << "This is derived output" << "\n";
        return out;
    }
};

int main() 
{
    Base base(5);
    base.print();
    std::cout << base;

    Derived derv(5);
    derv.print();
    std::cout << derv;

    

    return 0;
}