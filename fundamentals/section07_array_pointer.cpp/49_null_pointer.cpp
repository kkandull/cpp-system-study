// Section 6 - 6.8 ~ 6.10
// Focus: array and pointer
#include <iostream>
#include <cstddef>

void doSomething(double *ptr)
{
     if (ptr != nullptr)
    {
        // do something
        std::cout << *ptr << std::endl;
    }
    else 
    {
        // do nothing with ptr
        std::cout << "null ptr" << std::endl;
    }
    std::cout << "address of pointer in dosomething() " << &ptr << std::endl;
}
int main() 
{
    using namespace std;

    double* ptr{nullptr}; // modern c++

    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d);

    ptr = &d;

    doSomething(ptr);

    std::nullptr_t nptr; // null pointer

    cout << "address of pointer in main() " << &ptr << endl;
   
    return 0;
}