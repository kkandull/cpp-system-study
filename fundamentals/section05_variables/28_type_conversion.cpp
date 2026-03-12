// Section 5 - 4.4 ~ 4.6
// Focus: string and conversion
#include <iostream>
#include <typeinfo>
#include <iomanip>
int main() 
{
    using namespace std;

    int a = 123.0;
    
    cout << typeid(a).name() << endl;
    
    // numeric conversion
    int i = 30000; // 작은 값은 문제 없음
    char c = i;
    // 표현 범위를 넘는 값이 들어가서 정보 손실 발생 가능
    
    cout << static_cast<int>(c) << endl;

    float f = 3.14;
    int j = f; // 버림

    cout << std::setprecision(12) << j << endl;

    cout << 5u - 10u << endl;

    // int, unsigned int, long, unsigned long, 
    // long long, unsigned long long, float, double
    // long double

    int k = static_cast<int>(4.0);
    return 0;
}