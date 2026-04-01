// Section 8 - 8.11 ~ 8.15
// Focus: anonymus
#include <iostream>

class A 
{
public: 
    int m_value;

    A(const int& input)
        :m_value(input)
    {
        std::cout << "Constructor" << "\n";
    }
    ~A()
    {
        std::cout << "Destructor" << "\n";
    }

    void print() const 
    {
        std::cout << m_value * 2 << "\n";
    }
};

int main() 
{
    A a(1); // 이름이 있는 객체
    a.print(); // 영역을 벗어나면 소멸자 호출

    A(1).print(); // rvalue 처럼 작동, 재사용 불가
    A(1).print();

    return 0;
}