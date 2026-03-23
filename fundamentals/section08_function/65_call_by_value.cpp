// Section 7 - 7.1 ~ 7.2
// Focus: parameter and argument
#include <iostream>

// call by value는 원본을 바꾸지 않는다
void doSomething(int y) // y는 x의 복사본이므로 다른 주소를 가진다
{
    y = 100;
    std::cout << "In Func " << y << " " << &y << std::endl;
}

int main() 
{
    using namespace std;
    
    doSomething(5);

    int x = 6;

    cout << "In main " << x << " " << &x << endl;

    doSomething(x);
    doSomething(x+1);
    
    return 0;
}