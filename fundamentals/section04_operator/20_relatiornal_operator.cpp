// Section 4 - 3.5 ~ 3.9
// Focus: operators, bitwise
#include <iostream>
#include <cmath>

int main() 
{
    using namespace std;
    
    int x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;

    if (x == y)
        cout << "equal" << endl;
    if (x != y)
        cout << "Not equal" << endl;
    if ( x > y)
        cout << "X is big" << endl;
    if (x < y)
        cout << "y is big" << endl; 
    if ( x >= y)
        cout << "X is big or equal" << endl;
    if (x <= y)
        cout << "y is big or equal" << endl; 

    // 같은 값이 아님
    double d1(100 - 99.99); // 0.01
    double d2(10 - 9.99);   // 0.01

    cout << std::abs(d1- d2) << endl;
    const double epsilon = 1e-10; // 오차

    cout << d1 << " " <<  d2 << endl;
    if (std::abs(d1- d2) < epsilon)
        cout << "Approximately equal" << endl;
    else 
        cout << "Not equal" << endl;
        
    return 0;
}