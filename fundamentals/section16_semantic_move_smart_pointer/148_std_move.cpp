// Section 15 - 15.2 ~ 15.4
// Focus: std::move
#include "Resource.h"
#include "AutoPtr.h"
#include <utility>
#include <vector>
#include <string>

template<class T>
void mySwap(T &a, T &b)
{
    T temp{ std::move(a)};
    a = std::move(b);
    b = std::move(temp);
}

int main() 
{
    
    /*{
        AutoPtr<Resource> res1(new Resource(10000000));
        std::cout << res1.m_ptr << "\n";

        AutoPtr<Resource> res2 = std::move(res1);

        std::cout << res1.m_ptr << "\n";
        std::cout << res2.m_ptr << "\n";
    }*/

    /*{
        AutoPtr<Resource> res1(new Resource(3));
        res1->setAll(3);

        AutoPtr<Resource> res2(new Resource(5));
        res2->setAll(5);

        res1->print();
        res2->print();

        mySwap(res1, res2);

        res1->print();
        res2->print();

    }*/

    {
        std::vector<std::string> v;
        std::string str = "Hello";

        v.push_back(str);

        std::cout << str << "\n";
        std::cout << v[0] << "\n";

        v.push_back(std::move(str));

        std::cout << str << "\n";
        std::cout << v[0] << " " << v[1] << "\n";

    }

    return 0;
}