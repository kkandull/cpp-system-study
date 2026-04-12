// Section 11 - 11.4 ~ 11.6
// Focus: derived_class
#include <iostream>

class Mother
{
private:
    int m_i;
public:
    Mother(int i_in = 0)
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
    A(int a)
    {
        std::cout << "A: "<< a << "\n";
    }
    ~A()
    {
        std::cout << "Destrcutor A" << "\n";
    }
};

class B : public A
{
public:
    B(int a, double b)
        : A(a)
    {
        std::cout << "B: " <<  b << "\n";
    }
    ~B()
    {
        std::cout << "Destrcutor B" << "\n";
    }
};

class C : public B
{
public:
    C(int a, double b, char c)
        : B(a, b)
    {
        std::cout << "C: " << c << "\n";
    }
    ~C()
    {
        std::cout << "Destrcutor C" << "\n";
    }
    
};

int main() 
{
    Child child;
    std::cout << sizeof(Mother) << "\n"; // 4 bytes (int 하나)
    std::cout << sizeof(Child) << "\n";  // 16 bytes (int 4 + padding 4 + double 8) -> 부모 + 자식 데이터 모두 포함!
    
    C c(1024, 3.14, 'a');
    // constructor a->b->c destructor c->b->a
    return 0;
}