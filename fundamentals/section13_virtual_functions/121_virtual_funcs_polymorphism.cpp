// Section 12 - 12.1 ~ 12.3
// Focus: polymorphism
#include <iostream>

class A
{
public:
    virtual void print() const { std::cout << "A" << "\n"; }
};

class B : public A
{
public:
    void print() const override { std::cout << "B" << "\n"; }
};

class C : public B
{
public:
    void print() const { std::cout << "C" << "\n"; }
};

class D : public C
{
public:
    void print() const { std::cout << "D" << "\n"; }
};

int main() 
{
    A a;
    B b;
    C c;
    D d;

    A &ref = b;
    ref.print();

    B &ref2 = c;
    ref2.print();
    
    C &ref3 = d;
    ref3.print();

    return 0;
}