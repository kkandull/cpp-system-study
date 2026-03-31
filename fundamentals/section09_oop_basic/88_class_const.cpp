// Section 8 - 8.7 ~ 8.10
// Focus: class and const
#include <iostream>
#include <string>
class Something
{

public:
    int m_value = 0;
    std::string m_svalue = "default";
    Something(const Something& st_in)
        : m_value(st_in.m_value), m_svalue(st_in.m_svalue)
    {
        std::cout << "Copy Constructor" << "\n";
    }

    Something()
        : m_value(0), m_svalue("default")
    {
        std::cout << "Constructor" << "\n";
    }

    const std::string& getValue() const 
    { 
        std::cout << "const version" << "\n";
        return m_svalue; 
    }

    std::string& getValue() 
    { 
        std::cout << "non const version" << "\n";
        return m_svalue; 
    }

    void setValue(int value) 
    { 
        m_value = value; 
    }

    /*int getValue() const 
    { 
        return m_value; 
    }*/
    
};

void print(const Something& st)
{
    std::cout << &st << "\n";
    std::cout << st.getValue() << "\n";
}



int main() 
{
    Something some;
    // some.setValue(3); 불가 
    std::cout << some.getValue() << "\n"; // const로 막아두면 가능

    std::cout << &some << "\n";
    print(some);
    
    Something s1;
    s1.getValue() = "changed"; // non const version

    const Something s2;
    s2.getValue(); // const version

    return 0;
}