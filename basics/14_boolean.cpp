// Section 3 - 2.6 ~ 2.9
// Focus: types and const
#include <iostream>

bool isEqual(int a, int b) 
{
    return a == b;
}
int main()
{
    using namespace std;

    bool b1 = true;
    bool b2(false);
    bool b3{ true };
    b3 = false;

    cout << std::boolalpha; // 0,1 을 false,true 
    cout << b3 << endl;
    cout << b1 << endl;
    cout << isEqual(1,3) << endl;
    cout << isEqual(4,4) << endl;

    cout << std::noboolalpha;
    cout << !b2 << endl;
    cout << !b1 << endl;

    // AND
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;
    
    // OR
    cout << (true || true) << endl;
    cout << (false || true) << endl;
    cout << (true || false) << endl;
    cout << (false || false) << endl;

    // if / else
    if (3 > 1) 
    {
        cout << "hello" << endl;
        cout << "second" << endl;
    }
    else 
        cout << "bye";

    // 0 = false
    // 0이 아닌 값 = true
    if (1)
    {

    } // true
    if (0)
    {

    } // fasle
    return 0;
}