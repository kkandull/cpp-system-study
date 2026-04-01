// Section 8 - 8.11 ~ 8.15
// Focus: static member func
#include <iostream>

class Something 
{
    // 간접적 구현 
    class _init
    {
    public:
        _init()
        {
            s_value = 9876;
        }
    };

private: 
    static int s_value;
    int m_value = 1024;

    static _init s_initializer;
public: 
    // 생성자에서 static 변수 초기화 불가능 
    static int getValue()
    {
        // this 사용 불가
        return s_value;
    }
    int temp()
    {
        return this->s_value + this->m_value;
    }
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main() 
{
    std::cout << Something::getValue() << "\n";

    Something s1, s2;
    std::cout << s1.getValue() << "\n";
    
    int (Something::*fptr1)() = &Something::temp;
    std::cout << (s2.*fptr1)() << "\n";

    int (*fptr2)() = &Something::getValue;

    std::cout << fptr2() << "\n";

    return 0;
}