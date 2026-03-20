// Section 6 - 6.14 ~ 6.17
// Focus: refernce and for-each
#include <iostream>

void doSomething(int &n) 
{
    n = 10;
    std::cout << "In doSomething " << n << std::endl;
    std::cout << &n << std::endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};


int main() 
{
    using namespace std;
    
    int value = 5;
    int *ptr = nullptr;
    ptr = &value;

    int &ref = value; // non-const reference는 반드시 초기화해야 하고, const 객체에는 바인딩할 수 없다

    const int y = 6;
    const int &ref2 = y; // 가능 

    cout << ref << endl;

    ref = 10;
    cout << value <<  " " << ref << endl;

    cout << &value << endl; // same
    cout << &ref << endl; // same
    cout << ptr << endl; // same
    cout << &ptr << endl;

    int n = 5;

    cout << n << endl;
    cout << &n << endl;

    doSomething(n);

    cout << n << endl;

    Other ot;
    ot.st.v1 = 3;
    int &v1 = ot.st.v1;
    v1 = 10;
    cout << ot.st.v1 << endl;

    return 0;
}