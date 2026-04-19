// Section 14 - 14.1 ~ 14.3
// Focus: stack unwinding
#include <iostream>

void last() 
{
    std::cout << "last" << "\n";
    throw -1.2;
    std::cout << "end last" << "\n";
}

void second()
{
    std::cout << "second" << "\n";

    last();

    std::cout << "end second" << "\n";
}

void first()
{
    std::cout << "First" << "\n";

    try
    {
        second();
    }
    catch(int)
    {
        std::cerr << "first caught int" << '\n';
    }

    std::cout << "end first" << "\n";
}

int main() 
{
    std::cout << "Start" << "\n";
    try
    {
        first();
    }
    catch(int)
    {
        std::cerr << "Catch main" << "\n";
    }
    // uncaught exceptions
    catch(...) // catch all handlers
    {
        std::cerr << "main caught ellipses exception" << "\n";
    }
    return 0;
}