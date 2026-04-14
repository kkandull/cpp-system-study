// Section 12 - 12.1 ~ 12.3
// Focus: override, final, covariant
#include <iostream>
#include <typeinfo>

class A
{
public:
    virtual void print() const { std::cout << "A" << "\n"; }
    virtual A* getThis() 
    {
        std::cout << "A::getThis()" << "\n";
        return this; 
    }
};

class B : public A
{
public:
    // override로  override 확인 
    void print() const override { std::cout << "B" << "\n"; }
    B* getThis() override
    {
        std::cout << "B::getThis()" << "\n";
        return this; 
    }
};

class C : public B
{
public:
    void print() const /*final 로 밑에 막아버림*/ { std::cout << "C" << "\n"; }
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
    b.getThis()->print();
    ref.getThis()->print();

    std::cout << typeid(b.getThis()).name() << "\n";
    std::cout << typeid(ref.getThis()).name() << "\n";
    return 0;
}