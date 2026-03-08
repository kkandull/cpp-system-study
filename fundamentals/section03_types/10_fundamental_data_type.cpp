// Section 3 - 2.1 ~ 2.2
// Focus: data type
#include <iostream>


int main() 
{
    using namespace std;
    // signed 0, 음의 정수, 양의 정수 unsigned 0 또는 양의 정수
    // integer 4byte
    
    char a = 'H'; // char 1byte
    bool bvalue = true;

    float fvalue = 3.141592f;
    double dvalue = 3.141592;

    auto avalue = 3.141592;
    auto avalue2 = 3.141592f;
    
    int c(int(3.14)); // direct initialization
    int d{ 4 }; // uniform initialization
    int z{ int(3.14)}; // int z{3.14}; error

    int k = 0, l(456), m{ 123 };

    cout << (bvalue ? 1:0) << endl;
    cout << int(a) << endl;

    cout << fvalue << endl;
    cout << dvalue << endl;
    
    cout << sizeof(bvalue) << endl; // 1
    cout << sizeof(a) << endl; // 1
    cout << sizeof(avalue) << endl; // 8
    cout << sizeof(avalue2) << endl; // 4
    return 0; 
}