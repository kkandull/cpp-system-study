// Section 14 - 14.4 ~ 14.6
// Focus: func try
#include <iostream>

class A
{
private:    
    int m_x;
public:
    A(const int x) : m_x(x) 
    {
        if ( x <= 0)
            throw 1;
    }
};

class B : public A
{
public:
    B(const int x) try : A(x) 
    {}
    catch(...)
    {
        std::cout << "Catch in B constructor" << "\n";
        // 주의: 생성자의 catch 블록은 끝날 때 자동으로 throw; 가 실행됨! 예외를 삼킬 수 없음!
    }
};

int main() 
{
    try
    {
        B b(0);
    }
    catch(...)
    {
        std::cerr << "Catch is main()" << '\n';
    }
    
    
    return 0;
}