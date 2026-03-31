// Section 8 - 8.7 ~ 8.10
// Focus: static member variable
#include <iostream>

class Something
{

public:
    static /*constexpr*/ int s_value; // static constexpr 정수형 상수는 클래스 안에서 바로 초기화 가능
};

int Something::s_value = 1; // define in cpp (const가 아닐 경우만)


int main() 
{
    std::cout << &Something::s_value << " " << Something::s_value << "\n";
    
    Something s1;
    Something s2;

    s2.s_value = 3;
    
    std::cout << &s1.s_value << " " << s1.s_value << "\n";
    std::cout << &s2.s_value << " " << s2.s_value << "\n";

    Something::s_value = 1024;
    std::cout << &Something::s_value << " " << Something::s_value << "\n";
    return 0;
}