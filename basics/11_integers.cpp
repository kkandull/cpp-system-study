// Section 3 - 2.1 ~ 2.2
// Focus: data type
#include <iostream>
#include <cmath>
#include <limits>
int main() 
{
    using namespace std;

    int i = 1; // 4 bytes = 32bits
    short s = 3; // 2  bytes = 16bits
    long l = 1; // 4
    long long ll = i; // 8
    
    // int
    cout << "<int>" << endl; 
    cout  << std::numeric_limits<int>::max() << endl; // 2147483647
    cout  << std::numeric_limits<int>::min() << endl; // -2147483648
    cout  << std::numeric_limits<int>::lowest() << endl; // -2147483648

    // signed int
    cout << "<signed int>" << endl; 
    cout  << std::numeric_limits<signed int>::max() << endl; // 2147483647
    cout  << std::numeric_limits<signed int>::min() << endl; // -2147483648
    cout  << std::numeric_limits<signed int>::lowest() << endl; // -2147483648

    // unsigned int
    cout << "<unsigned int>" << endl; 
    cout  << std::numeric_limits<unsigned int>::max() << endl; // 4294967295
    cout  << std::numeric_limits<unsigned int >::min() << endl; // 0
    cout  << std::numeric_limits<unsigned int>::lowest() << endl; // 0

    // short
    cout << "<short>" << endl; 
    cout  << std::numeric_limits<short>::max() << endl; // 32767
    cout  << std::numeric_limits<short>::min() << endl; // -32768
    cout  << std::numeric_limits<short>::lowest() << endl; // -32768
    // long
    cout << "<long>" << endl; 
    cout  << std::numeric_limits<long>::max() << endl; // 2147483647
    cout  << std::numeric_limits<long>::min() << endl; // -2147483648
    cout  << std::numeric_limits<long>::lowest() << endl; // -2147483648
    // long long 
    cout << "<long>" << endl; 
    cout  << std::numeric_limits<long long>::max() << endl; // 9223372036854775807
    cout  << std::numeric_limits<long long>::min() << endl; // -9223372036854775808
    cout  << std::numeric_limits<long long>::lowest() << endl; // -9223372036854775808
    
    // overflow
    s = 32767;
    s = s + 1;
    cout << s << endl;
    
    // underflow
    s = -32768;
    s = s - 1;
    cout << s << endl;

    cout << 22 / 4 << endl; // int 
    cout << float(22) / 4 << endl; // float
    return 0;
}