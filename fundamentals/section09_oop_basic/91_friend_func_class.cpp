// Section 8 - 8.11 ~ 8.15
// Focus: friend func and class
#include <iostream>

class A; // forward declaration

class B
{
private:
    int m_value = 2;

public:
    void doSomething(A& a);
};

class A
{
private:
    int m_value = 1;
    // friend void doSomething(A& a, B& b);
    // friend class B;
    friend void B::doSomething(A& a);
};

void B::doSomething(A& a)
{
    std::cout << a.m_value << " "  << "\n"; // private 멤버 접근 가능 
}

/*void doSomething(A& a, B& b)
{
    std::cout << a.m_value << " " << b.m_value << "\n"; // private 멤버 접근 가능 
}*/

int main() 
{
    A a;
    B b;
    b.doSomething(a);
    
    return 0;
}