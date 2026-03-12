// Section 5 - 4.4 ~ 4.6
// Focus: string and conversion
#include <iostream>
#include <typeinfo>

auto add(int x, int y) // 일반 매개변수 타입으로 auto는 쓸 수 없다
{
    return x + (double)y;
}

int main() 
{
    using namespace std;
    
    auto a = 123;
    // auto a; 불가
    auto c = 1 + 2.0;
    auto d = 123.0;

    auto result = add(1, 2);
    cout << result << endl;
    cout << typeid(result).name() << endl;

    auto z{ 1 };
    
    return 0;
}