// Section 4 - 3.5 ~ 3.9
// Focus: operators, bitwise
#include <iostream>
#include <bitset>

int main() 
{
    using namespace std;

    // << left shift 
    // >> right shift 
    // ~, &, |, ^ 

    unsigned int a = 3;
    cout << std::bitset<4>(a) << endl;

    unsigned int b = a << 2; // 0011 -> 1100

    cout << std::bitset<4>(b) << " " << b << endl;

    cout << std::bitset<4>(~a) << " " << (~a) << endl; // bitset<4>는 하위4비트만 표시

    unsigned int c = 0b1100;
    unsigned int d = 0b0110;

    cout << c << " " << d << endl;
    cout << std::bitset<4>(c & d) << endl; // bitwise AND
    cout << std::bitset<4>(c | d) << endl; // bitwise OR
    cout << std::bitset<4>(c ^ d) << endl; // bitwise XOR
    
    unsigned int z = 0b0110;
    cout << std::bitset<4>(z) << " " << (z >> 2) << endl; // 0001
    cout << std::bitset<4>(5 | 12) << " " << (5 | 12) <<  endl; // 1101
    cout << std::bitset<4>(5 & 12) << " " << (5 & 12) <<  endl; // 0100
    cout << std::bitset<4>(5 ^ 12) << " " << (5 ^ 12) <<  endl; // 1001

    return 0;
}