// Section 13 - 13.5 ~ 13.8
// Focus: member func templates
#include <iostream>

template<class T>
class A
{
private:
    T m_value;

public: 
    A(const T& input)
        : m_value(input)
    {}

    template<typename TT>
    void doSomething()
    {
        std::cout << typeid(T).name() << " " << typeid(TT).name() << "\n";
        std::cout << static_cast<TT>(m_value) << "\n";
    }

    void print() const 
    {
        std::cout << m_value << "\n";
    }
};

int main() 
{
    A<char> a_char('A');
    a_char.print();

    a_char.doSomething<int>();
    
    return 0;
}