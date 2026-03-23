// Section 6 - 6.8 ~ 6.10
// Focus: array and pointer
#include <iostream>

void printArray(int *array)
{
    std::cout << sizeof(array) << std::endl;
    std::cout << *array << std::endl;
    *array = 100;
}

struct MyStruct
{
    int arrays[5] = {5,4,3,2,1};
};

void doSomething(MyStruct *ms)
{
    std::cout << sizeof((*ms).arrays) << std::endl;
    //std::cout << sizeof(ms->arrays) << std::endl;
}

int main() 
{
    using namespace std;

    int array[5] = { 1, 2, 3, 4, 5};
    
    // 주소 값은 같아 보일 수 있지만 타입은 다름
    cout << &array << endl;
    cout << &(array)[0] << endl;

    cout << *array << endl;

    char name[] = "JackJack";
    cout << *name << endl;
    
    int *ptr = array;
    cout << ptr << endl;
    cout << &ptr << endl; // pointer 주소 자체는 다름
    cout << *ptr << endl;

    cout << sizeof(array) << endl; // 20
    cout << sizeof(ptr) << endl; // pointer size (x86: 4, x64: 8)
    printArray(array); // pointer size (x86: 4, x64: 8)

    cout << array[0] << " " << *array << endl;

    cout << *ptr << " " << *(ptr + 1) << endl;

    MyStruct ms;
    cout << ms.arrays[0] << endl;
    cout << sizeof(ms.arrays) << endl; // 20
    doSomething(&ms); // 20

    return 0;
}