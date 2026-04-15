// Section 12 - 12.4 ~ 12.7
// Focus: virtual table
#include <iostream>

class Base
{
public :
    // FunctionPointer = *__vptr;
    virtual void func1() {};
    void func2() {};
};

class Der : public Base
{
public : 
    // FunctionPointer = *__vptr;
    void func1() {};
    void func3() {};
};

int main() 
{
    std::cout << sizeof(Base) << "\n"; // 8 x64 기준 
    std::cout << sizeof(Der) << "\n"; // 8 x64 기준 
    
    return 0;
}