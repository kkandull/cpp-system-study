// Section 7 - 7.14 ~ 7.16
// Focus: assert
#include <iostream>
#include <cassert> // assert.h
#include <array>

void printArray(const std::array<int, 5> &my_array, const int &ix) 
{
    assert(ix >= 0 && ix < static_cast<int>(my_array.size()));
    std::cout << my_array[ix] << std::endl;
}
int main() 
{
    using namespace std;
    // assert(false);

    const int number = 5;

    // number should be 5
    assert(number == 5);

    std::array<int, 5> my_array = {1,2,3,4,5};
    // assert failure example
    printArray(my_array, 10);

    const int x = 5;
    // const int x = 10; problem

    assert(x == 5); // 런타임시 알려줌 
    static_assert(x == 5, "x should be 5"); // 컴파일 시 미리 알 수 있음
    return 0;
}