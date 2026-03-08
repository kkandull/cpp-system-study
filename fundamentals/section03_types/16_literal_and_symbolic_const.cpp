// Section 3 - 2.6 ~ 2.9
// Focus: types and const
#include <iostream>
#include "MY_CONSTANT.h"

int main()
{   using namespace std;

    // literal
    float pi = 3.14f; //float 
    unsigned int n = 5u; // unsigned
    long n2 = 5L; // long

    // Decimal : 0 1 2 3 4 5 6 7 8 9 10
    // Octal   : 0 1 2 3 4 5 6 7 10 11 12 13
    // Hexa    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

    int x1 = 12;  // decimal  
    int x2 = 012; // octal
    int x3 = 0xF; // hexa
    int x4 = 0b1011'1111'1010; // binary

    cout << x1 << endl;
    cout << x2 << endl;
    cout << x3 << endl;
    cout << x4 << endl;

    // symbolic 
    const double gravity{ 9.8 }; // runtime
    //gravity = 1.2; 불가

    constexpr int my_const(1234); // compile

    int number;
    cin >> number;

    const int special_number(number); // constexper 불가

    double radius;
    cin >> radius;

    double circum = 2.0 * radius * constants::pi;
    cout << circum << endl;

    return 0;
}