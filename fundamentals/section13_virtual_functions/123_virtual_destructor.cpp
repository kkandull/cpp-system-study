// Section 12 - 12.4 ~ 12.7
// Focus: virtual destructor
#include <iostream>

class Base 
{
public: 
    virtual ~Base()
    {
        std::cout << "~Base()" << "\n";
    }
};

class Derived : public Base
{
private: 
    int *my_array;
public: 
    Derived(int length)
    {
        my_array = new int[length];
    }
    Derived(const Derived& other) = delete; 
    Derived& operator=(const Derived& other) = delete;

    virtual ~Derived() override
    {
        std::cout << "~Derive()" << "\n";
        delete[] my_array;
    }
};

int main() 
{
    
    Derived *derived = new Derived(5);
    Base *base = derived;
    delete base;
    
    return 0;
}