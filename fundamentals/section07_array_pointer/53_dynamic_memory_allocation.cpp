// Section 6 - 6.11 ~ 6.13
// Focus: dynamic allocate and pointer
#include <iostream>

int main() 
{
    using namespace std;
    
    int *ptr = new (std::nothrow) int{ 7 };
    //*ptr = 7;
    if ( ptr )
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }
    else 
    {
        cout << "Could not allocate memory" << endl;   
    }

    delete ptr;

    cout << ptr << endl;
    // cout << *ptr << endl; 하면 안됨

    ptr = nullptr;
    if (ptr != nullptr) 
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    int *ptr2 = ptr;

    delete ptr;
    ptr = nullptr;
    // ptr2는 이제 dangling pointer
    ptr2 = nullptr;

    // memory leak
    int count = 0;
    while (count < 10)
    {
        // delete를 안 하면 leak 발생
        int *ptr3 = new int;
        cout << ptr3 << endl;
        //delete ptr3;
        count++;
    }
    return 0;
}