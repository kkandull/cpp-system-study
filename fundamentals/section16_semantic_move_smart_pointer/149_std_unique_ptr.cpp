// Section 15 - 15.5 ~ 15.7
// Focus: std::unique_ptr
#include <iostream>
#include <memory>
#include "Resource.h"
#include <utility>

auto doSomething()
{
    //auto res1 = std::make_unique<Resource>(5);
    //return res1;

    //return std::unique_ptr<Resource>(Resource(5));

    return std::make_unique<Resource>(5);
}

//auto doSomething2(std::unique_ptr<Resource> &res)
void doSomething2(Resource * res)
{
    std::cout << std::boolalpha;
    std::cout << static_cast<bool>(res) << "\n";
    res->setAll(10);
    // return res;
}

int main() 
{
    {
        std::unique_ptr<int> upi(new int);

        // std::unique_ptr<Resource> res1(new Resource(5));
        // auto res1 = std::make_unique<Resource>(5);
        auto res1 = doSomething();

        res1->setAll(5);
        res1->print();
    
        std::unique_ptr<Resource> res2;

        std::cout << std::boolalpha;
        std::cout << static_cast<bool>(res1) << "\n";
        std::cout << static_cast<bool>(res2) << "\n";

        // res2 = res1; // error
        res2 = std::move(res1);

        std::cout << std::boolalpha;
        std::cout << static_cast<bool>(res1) << "\n";
        std::cout << static_cast<bool>(res2) << "\n";

        if(res1 != nullptr) res1->print();
        if(res2 != nullptr) res2->print(); // (*res2).print();
    }

    {
        auto res1 = std::make_unique<Resource>(5);
        res1->setAll(5);
        res1->print();

        // doSomething2(res1);
        // res1 = doSomething2(std::move(res1));
        doSomething2(res1.get());
        std::cout << std::boolalpha;
        std::cout << static_cast<bool>(res1) << "\n";
        res1->print();
    }

    {   
        // do not 
        // Resource * res = new Resource;
        // std::unique_ptr<Resource> res1(res);
        auto res1 = std::make_unique<Resource>();
        // std::unique_ptr<Resource> res2(res); // x

        // delete res; // x
    }

    return 0;
}