// Section 12 - 12.8 ~ 12.11
// Focus: ostream override
#include <iostream>

class Base 
{
public:
    Base() {}

    friend std::ostream & operator << (std::ostream & out, const Base & b)
    {
        return b.print(out);
    }

    virtual std::ostream & print(std::ostream & out) const 
    {
        out << "Base";
        return out;
    }
    virtual ~Base() = default;
};

class Derived : public Base
{
public:
    Derived() {}
    virtual std::ostream & print(std::ostream & out) const override
    {
        out << "Derived";
        return out;
    }
};
int main() 
{
    Base b;
    std::cout << b << "\n";

    Derived d;
    std::cout << d << "\n";

    Base &br = d;
    std::cout << br << "\n";

    return 0;
}