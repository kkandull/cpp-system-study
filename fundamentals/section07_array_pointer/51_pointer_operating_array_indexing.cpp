// Section 6 - 6.8 ~ 6.10
// Focus: array and pointer
#include <iostream>

int main() 
{
    using namespace std;
    

    int value = 7;
    int *ptr1 = &value;

    // data type size 만큼 이동
    cout << uintptr_t(ptr1 - 1) << endl;
    cout << uintptr_t(ptr1) << endl;
    cout << uintptr_t(ptr1 + 1) << endl;

    int array[] = { 9, 7, 5 ,3 ,1};
    int *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        //cout << array[i] << " " << (uintptr_t)&array[i] << endl;
        cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
    }

    char name[] = "kkandull ing";
    const int n_name = sizeof(name) / sizeof(name[0]);
    char *ptr2 = name;
    for (int i = 0; i < n_name; i++)
    {
        cout << *(ptr2 + i);
    }
    cout << endl;

    while (true)
    {   
        if (*(ptr2) == '\0')
            break;
        cout << *(ptr2);
        ++ptr2;
    }
    return 0;
}