// Section 6 - 6.11 ~ 6.13
// Focus: dynamic allocate and pointer
#include <iostream>
#include <cstdint>
int main() 
{
    using namespace std;
    
    // const int length = 5;
    // int array[length];

    int length;
    cin >> length;

    int * array = new int[length](); // 0으로 초기화
    //int * array = new int[length]{11, 13, 13}; 적게 하면 오류남

    array[0] = 1;
    array[1] = 2;
    int *ptr = array;
    int *end = array + length;
    while (ptr < end)
    {
        cout << *(ptr) << endl;
        ++ptr;

    }
    for ( int i = 0; i < length; i++)
    {
        cout <<(uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }
    delete [] array;
    array = nullptr;
    return 0;
}