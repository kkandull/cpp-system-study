// Section 12 - 12.8 ~ 12.11
// Focus: diamond problem
#include <iostream>

class A
{
public: 
    int m_i;
    A(int a)
    {
        std::cout << 'A' << a << "\n";
    }
    virtual ~A() = default;
};


class B : virtual public A
{
public: 
    B(int b, int a) : A(a)
    {
        std::cout << 'B' << b << "\n";
    }
};

class C : virtual public A
{
public: 
    C(int c, int a) : A(a)  
    {
        std::cout << 'C' << c << "\n";
    };
};

class D : public B, public C
{
public: 
    D(int b, int c, int a) : B(b, a), C(c, a), A(a)
    {}
};
int main() 
{
    D d(2, 3, 1);

    std::cout << &d.C::A::m_i << "\n";
    std::cout << &d.B::A::m_i << "\n";
    
    return 0;
}