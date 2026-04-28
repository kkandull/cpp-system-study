// Section 15 - 15.5 ~ 15.7
// Focus: std::shared_ptr
#include <iostream>
#include "Resource.h"
#include <memory>

void doSomething(std::unique_ptr<Resource> res)
{}
int main() 
{
    // doSomething(std::unique_ptr<Resource>(new Resource(10000)));
    doSomething(std::make_unique<Resource>(10000));

    auto ptr1 = std::make_shared<Resource>(3);
    
    ptr1->setAll(1);
    ptr1->print();
    {
        auto ptr2 = ptr1;
        ptr2->setAll(10);
        ptr2->print();

        std::cout << "Going out of the block" << "\n";
    }

    ptr1->print();
    std::cout << "Going out of the outer block" << "\n";

    return 0;
}