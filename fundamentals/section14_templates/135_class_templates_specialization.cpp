// Section 13 - 13.5 ~ 13.8
// Focus: specialization
#include <iostream>

template<typename T>
class A
{
public:
    A(const T& input)
    {}
    void doSomething()
    {
        std::cout << typeid(T).name() << "\n";
    }
    void test()
    {}
};

template<> // 다른 클래스 느낌 
class A<char>
{
public: 
    A(const char& input)
    {}
    void doSomething()
    {
        std::cout << "char type specialization" << "\n";
    }
};

int main() 
{
    // A<int> a_int;
    // A<double> a_double;
    // A<char> a_char;

    A a_int(1);
    A a_double(3.14);
    A a_char('a');

    a_int.doSomething();
    a_double.doSomething();
    a_char.doSomething();
    
    a_int.test();
    // a_char.test(); 불가
    return 0;
}