// Section 6 - 6.11 ~ 6.13
// Focus: dynamic allocate and pointer
#include <iostream>

int main() 
{
    using namespace std;
    
    const int value = 5;
    const int *ptr = &value;
    // *ptr = 6; // value = 6이 안되기 때문에 저것도 안됨

    cout << *ptr << endl;

    int value3 = 5;
    const int *ptr2 = &value3;
    value3 = 6;

    cout << *ptr2 << endl;

    int value1 = 5;
    const int *ptr3 = &value1; // 주소에 있는 값을 안바꾼다는 거지 주소 값을 바꾸지 않는건 아님
    
    int value2 = 6;
    ptr3 = &value2;
    cout << *ptr3 << endl;
    
    int value4 = 5;
    int *const ptr4 = &value4;
    *ptr4 = 10;
    cout << *ptr4 << endl;
    int value5 = 10;
    // ptr4 = &value5; 불가

    int value6 = 6;
    // pointer to const
    const int *ptr6 = &value6; // 가리키는 값 수정 불가, 주소 변경 가능
    // *ptr6 = 7; X, ptr6 = &value1; O

    // const pointer
    int *const ptr7 = &value6; // 가리키는 값 수정 가능, 주소 변경 불가
    // ptr7 = &value1; X, *ptr7 = 6; O

    // const pointer to const
    const int *const ptr8 = &value6; // 둘다 불가
    // *ptr8 = 6;, ptr8 = &value2; X

    return 0;
}