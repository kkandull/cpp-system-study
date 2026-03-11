// Section 5 - 4.1 ~ 4.3
// Focus: variables and linkage
#include <iostream>

using namespace std;
int value = 123; // global

// 다른 cpp 파일 접근 불가
static int g_a = 1;

// forward declartion
extern void doSomething2(); // extern 없어도 됨
extern int a;
// extern int a = 456; // 중복 초기화 불가

//int a = 1;
void doSomething() 
{
    static int a = 1; // 초기화 한번만 함, 같은 주소 재사용
    // static int a; 불가
    ++a;
    cout << a << endl;
}
int main() 
{
    
    cout << value << endl; // global
    int value = 1; // local 
    cout << ::value << endl; // global
    cout << value << endl; // local

    doSomething();
    doSomething();
    doSomething2(); 
    cout << a << endl;
    return 0;
}
/*
    int g_X; // external linkage
    static int g_x; // internal linkage
    const int g_x; // 불가

    extern int g_z;
    extern const int g_z;

    int g_y(1);
    static int g_y(1);
    const int g_y(1);

    extern int g_w(1); // 다른 곳에서 초기화 하면 안됨
    extern const int g_w(1);
*/