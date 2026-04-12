// Section 11 - 11.4 ~ 11.6
// Focus: access_designator
#include <iostream>

class Base
{
public: 
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};

class Derived : protected Base
{
public:
    Derived()
    {
        Base::m_public = 1024; // this->m_public;
        Base::m_protected = 103;
        // Base::m_private = 123; 불가
    }
};

class GrandChild : public Derived
{
public:
    GrandChild()
    {
        Derived::m_public = 1023;
        Derived::m_protected = 12;
    }
};
int main() 
{
    Base base;
    base.m_public = 1023;
    // 불가
    // base.m_protected;
    // base.m_private;
    
    return 0;
}