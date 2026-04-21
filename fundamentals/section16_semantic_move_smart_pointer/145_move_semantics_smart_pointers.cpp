#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

// RAII : resource acquisition is initialization
void doSomething()
{
    try
    {
        // Resource * res = new Resource; // dull pointer
        AutoPtr<Resource> res(new Resource);
        if (true)
            throw -1; // exception
    }
    catch(...)
    {

    }
    return;
}
int main() 
{
    // doSomething();
    {
        AutoPtr<Resource> res1(new Resource);
        AutoPtr<Resource> res2;

        std::cout << std::boolalpha;

        std::cout << res1.m_ptr << "\n";
        std::cout << res2.m_ptr << "\n";

        res2 = res1; // move semantics

        std::cout << res1.m_ptr << "\n";
        std::cout << res2.m_ptr << "\n";
        if (!res1.isNull()) {
            // res1은 이미 털렸으므로 이 코드는 실행되지 않음
            std::cout << res1->m_data[0] << "\n"; 
        }
        
    }

    // syntax vs semantics 
    /*int x = 1, y = 1;
    x + y;

    std::string str1("Hello"), str2("World");
    str1 + str2;*/

    return 0;
}