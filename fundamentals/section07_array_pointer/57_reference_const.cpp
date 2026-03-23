// Section 6 - 6.14 ~ 6.17
// Focus: refernce and for-each
#include <iostream>

void printValue(const int& x)
{
    std::cout << x << std::endl;
}

int main() 
{
    using namespace std;
    
    int x = 5;
    int &ref_X = x;
    const int &ref_2 = ref_X;

    // const reference는 임시값(rvalue)에도 바인딩될 수 있다
    const int &ref_y = 3 + 4;
    cout << ref_y << endl;
    cout << &ref_y << endl; // const reference가 temporary의 lifetime을 연장한다

    int a = 1;
    printValue(a);
    printValue(1);
    printValue(a + 3);
    printValue(43 * 4);

    return 0;
}