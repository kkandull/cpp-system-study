// Section 15 - 15.2 ~ 15.4
// Focus: move constructor assignment
#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"
#include "Timer.h"

AutoPtr<Resource> generateResource()
{
    AutoPtr<Resource> res(new Resource(10000000));

    return res;
}

int main() 
{
    std::streambuf* orig_buf = std::cout.rdbuf();
    //std::cout.rdbuf(NULL); // disconnect cout from buffer
    Timer timer;

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }

    std::cout.rdbuf(orig_buf);
    timer.elapsed();

    
    
    return 0;
}