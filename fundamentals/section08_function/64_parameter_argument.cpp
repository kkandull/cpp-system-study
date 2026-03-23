// Section 7 - 7.1 ~ 7.2
// Focus: parameter and argument
#include <iostream>

int foo(int x, int y);

int foo(int x, int y) // parameters
{
    return x + y;
} // 함수가 끝나면 매개변수 x, y도 함께 소멸한다

int main() 
{
    using namespace std;
    
    int x = 1, y = 2;

    foo(6, 7);  // 6, 7 : arguments (actual parameters)
    foo(x, y+1);
    return 0;
}