// Section 4 - 3.5 ~ 3.9
// Focus: operators, bitwise
#include <iostream>

int main() 
{
    using namespace std;
    
    // logical Not
    bool x = true;
    cout << !x << endl;

    // logical And 
    bool y = true;
    bool z = true;
    cout << (y && z) << endl;

    // logical OR
    cout << (y || !x) << endl;

    bool hit = true;
    int health = 10;

    if (hit && health < 20)
        cout << "Die" << endl;

    // short circuit evaluation
    int i = 2;
    int k = 2;

    // 왼쪽이 false기 때문에 오른쪽 실행을 안해버림 
    if ( i == 1 && k++ == 2)
    {
        cout << "hello" << endl;
    }
    cout << k << endl;

    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    // AND > OR
    bool r1 = v1 || (v2 && v3);
    bool r2 = (v1 || v2) && v3;

    cout << r1 << " " << r2 << endl;
    
    return 0;
}