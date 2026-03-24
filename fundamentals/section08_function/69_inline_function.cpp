// Section 7 - 7.3 ~ 7.6
// Focus: call by method
#include <iostream>

inline int getMin(int x, int y) // 무조건 치환아님
{
    return x > y ? y : x;
}

int main() 
{
    using namespace std;
    
    cout << getMin(5, 6) << endl;
    cout << getMin(11,5) << endl;

    // inline은 컴파일러에게 힌트를 주며,
    // 헤더에 함수 정의를 둘 때도 중요하게 사용된다.

    // inline 시
    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (11 > 5 ? 5 : 11) << endl;

    return 0;
}