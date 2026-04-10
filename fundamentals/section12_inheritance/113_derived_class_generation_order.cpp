// Section 11 - 11.1 ~ 11.3
// Focus: derived_class_generation_order
#include <iostream>

class Mother
{
private:
    int m_i;
public:
    Mother(const int & i_in = 0)
        : m_i(i_in)
    {
        std::cout << "Mother Constructor" << "\n";
    }
};

class Child : public Mother
{
public:
    double m_d;
public:
    Child() 
        :   Mother(1024), m_d(10.0)
    {
        std::cout << "Child Constructor" << "\n";
    }

};

class A
{
public:
    A()
    {
        std::cout << "A Constructor" << "\n";
    }
    ~A() 
    {
        std::cout << "A Destructor" << "\n";
    }
};

class B : public A
{
public:
    B()
    {
        std::cout << "B Constructor" << "\n";
    }
    ~B() 
    {
        std::cout << "B Destructor" << "\n";
    }
};

class C : public B
{
public:
    C()
    {
        std::cout << "C Constructor" << "\n";
    }
    ~C() 
    {
        std::cout << "C Destructor" << "\n";
    }
};

int main() 
{
    Child ch1;
    C c;
    return 0;
}