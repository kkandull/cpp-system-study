// Section 6 - 6.8 ~ 6.10
// Focus: array and pointer
#include <iostream>

const char* getName()
{
    return "Jack Jack";
}
int main() 
{
    using namespace std;
    
    const char *name = "Jack Jack";
    const char *name2 = "Jack Jack";
    const char *name3 = getName();

    // 같은 문자열 리터럴은 같은 주소로 보일 수 있지만, 항상 보장되지는 않음
    cout << (uintptr_t)name << endl;
    cout << (uintptr_t)name2 << endl;
    cout << (uintptr_t)name3 << endl;

    int arr[3] = {1, 2, 3};
    char char_arr[] = "Hello";
    
    cout << arr << endl;
    // 문자열 그대로 나옴 
    cout << char_arr << endl;
    cout << name << endl;

    char d = 'Q';
    cout << &d << endl;
    return 0;
}