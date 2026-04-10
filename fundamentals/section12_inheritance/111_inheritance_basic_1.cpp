// Section 11 - 11.1 ~ 11.3
// Focus: inheritance
#include <iostream>

class Mother
{
// private: // 자식 한테도 허용이 안됨 
protected:
    int m_i;
public:
    Mother() : m_i(0) {}
    Mother(int i_in)
        : m_i(i_in)
    {std::cout << "Constructor" << "\n";}
    void setValue (int i_in)
    {
        m_i = i_in;
    }
    int getValue() const
    {
        return m_i;
    }
};

class Child : public Mother // derived class 
{
private: 
    double m_d;

public: 
    Child(int i_in, double d_in)
        : Mother(i_in), m_d(d_in)
    {}
    void setValue(int i_in, double d_in)
    {
        Mother::setValue(i_in);
        m_d = d_in;
    }
    void setValue(double  d_in)
    {
        m_d = d_in;
    }
    double getValue() const 
    {
        return m_d;
    }
};

int main() 
{
    Mother mother;
    mother.setValue(1024);
    std::cout << mother.getValue() << "\n";
    
    Child child(1024, 128);
    //child.setValue(128);
    std::cout << child.Mother::getValue() << "\n";
    std::cout << child.getValue() << "\n";
}