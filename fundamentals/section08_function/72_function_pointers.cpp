// Section 7 - 7.7 ~ 7.10
// Focus: function pointers
#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func() 
{
    return 5;
}

int goo()
{
    return 10;
}

bool isEven(const int& number)
{
    return number % 2 == 0;
}   

bool isOdd(const int& number)
{
    return number % 2 != 0;
}

// typedef bool (*check_fcn_t)(const int&);
using check_fcn_t = bool (*)(const int&);
void printNumbers(const array<int, 10> &my_array, /* check_fcn_t check_fcn = isEven*/ std::function<bool(const int&)> check_fcn)
{
    for (const auto& elements : my_array)
    {
        if (check_fcn(elements)) cout << elements << " ";
        // if (!print_even && elements & 2 != 0 ) cout << elements << " ";
    }
    cout << endl;
}

int main() 
{
    
    int(*fcnptr)() = func;

    cout << fcnptr() << endl;

    fcnptr = goo;

    cout << fcnptr() << endl;

    std::array<int, 10> my_array { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::function<bool(const int&)> fcnptr1 = isEven;

    printNumbers(my_array, fcnptr1); // even
    fcnptr1 = isOdd;
    printNumbers(my_array, isOdd); // odd

    return 0;
}