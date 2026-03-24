// Section 7 - 7.3 ~ 7.6
// Focus: call by address
#include <iostream>

void foo(const int *ptr)
{
    std::cout << *ptr << " " << ptr << " " << &ptr << std::endl;
    // *ptr = 10 불가 
}
int main() 
{
    using namespace std;
    
    int value = 5;

    cout << value << " " << &value << endl;

    int* ptr = &value;

    cout << &ptr << endl;

    foo(ptr);
    foo(&value);

    return 0;
}