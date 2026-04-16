// Section 12 - 12.8 ~ 12.11
// Focus: object slicing
#include <iostream>
#include <vector>
#include <functional>

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

class Derived : public Base
{
public:
    int m_j = 1;
    virtual void print() override
    {
        std::cout << "Derived" << "\n";
    }
};

void doSomething(Base &b)
{
    b.print();
}

int main() 
{
    Derived d;
    Base b;

    // std::vector<Base&>
    std::vector<std::reference_wrapper<Base>> my_vec;
    my_vec.push_back(b);
    my_vec.push_back(d);

    for ( auto & ele : my_vec )
        ele.get().print();
    return 0;
}