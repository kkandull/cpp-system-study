// Section 6 - 6.4 ~ 6.7
// Focus: array and pointer
#include <iostream>
#include <typeinfo>

struct Something
{
    int a, b, c, d; // 4 x 4 = 16
};

int main() 
{
    using namespace std;
    
    int x = 5;
    double y = 1.0;
    cout << x << endl;
    cout << &x << endl; // & : address-of operator

    // de-refernce operator (*)
    cout << *&x << endl; // 주소에 가서 그 값을 가져옴

    int * ptr_X = &x;
    double * ptr_y = &y;
    // ptr_X = &x;
    cout << ptr_X << endl;
    cout << *ptr_X << endl;

    cout << ptr_y << endl;
    cout << *ptr_y << endl;

    cout << typeid(ptr_X).name() << endl;

    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_X) << endl; // x64 8 x86 4
    cout << sizeof(&y) << " " << sizeof(ptr_y) << endl; // x64 8 x86 4

    Something ss;
    Something *ptr_s;

    cout << sizeof(Something) << endl; // 16
    cout << sizeof(ptr_s) << endl; // x64 8 x86 4

    int * ptr_n;
    //cout << *ptr_n << endl; 초기화 안 된 포인터 역참조 금지
    return 0;
}