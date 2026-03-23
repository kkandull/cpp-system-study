// Section 6 - 6.18 ~ 6.19
// Focus: pointers
#include <iostream>

int main() 
{
    using namespace std;
    
    // void*는 타입 정보가 없어서 직접 역참조할 수 없다
    // 원래 타입 포인터로 캐스팅한 후 역참조해야 한다
    int i = 5;
    float f = 3.0f;
    char c = 'a';

    void *ptr = nullptr;

    ptr = &i;
    ptr = &f;
    ptr = &c;

    // cout << ptr + 1 << endl; 포인트 연산 불가능 
    cout << &f << " " << ptr << endl;
    // cout << *ptr << endl; 불가
    cout << *static_cast<float*>(ptr) << endl;

    return 0;
}