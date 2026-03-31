// Section 8 - 8.7 ~ 8.10
// Focus: this pointer and chaining member
#include <iostream>
#include "87_0_Calc.h"
class Simple
{
private:
    int m_id;
public:
    Simple(int id)
    {
        this->setId(id); // 숨어 있음

        std::cout << this << "\n";
    }
    void setId(int id) { m_id = id; }
    int getId() const {return m_id;}

};

int main() 
{
    Simple s1(1), s2(2);
    s1.setId(2);
    s2.setId(4);

    std::cout << &s1 << " " << &s2 << "\n";

    Calc cal(10);
    cal.add(10).sub(19).mul(100).print();

    Calc(10).add(10).sub(19).mul(100).print();
    /*cal.add(10);
    cal.sub(19);
    cal.mul(100);
    cal.print();*/


    return 0;
}