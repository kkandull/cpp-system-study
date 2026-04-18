// Section 13 - 13.5 ~ 13.8
// Focus: specialization
#include <iostream>

template<class T>
class A_Base
{
protected:
    T m_value;
public:
    A_Base(const T& input)
        :m_value(input)
    {}

    void print()
    {
        std::cout << m_value << "\n";
    }
};

template<class T>
class A : public A_Base<T>
{
public:
    A(const T& input)
        :A_Base<T>(input)
    {}
};

template<class T>
class A<T*> : public A_Base<T*>
{

public:
    A(T* input)
        :A_Base<T*>(input)
    {}

    void print()
    {
        std::cout << *(this->m_value) << "\n";
    }

};

/*template<class T>
class A<T*>
{
private:
    T* m_value;
public:
    A(T* input)
        :m_value(input)
    {}

    void print()
    {
        std::cout << *m_value << "\n";
    }
};*/

int main() 
{
    A<int> a_int(134);
    a_int.print();

    int temp = 456;

    A<int*> a_int_ptr(&temp);
    a_int_ptr.print();

    double temp_d = 3.14;
    A<double*> a_double_ptr(&temp_d);
    a_double_ptr.print();
    
    return 0;
}