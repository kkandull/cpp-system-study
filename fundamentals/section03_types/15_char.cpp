// Section 3 - 2.6 ~ 2.9
// Focus: types and const
#include <iostream>
#include <limits>
int main() 
{
    using namespace std;

    char c1(65);
    char c2('A'); // "Hello world" 문자열 , 'A' 한글자

    cout << sizeof(signed char) << endl;
    cout << (int)std::numeric_limits<signed char>::max() << endl; // 127
    cout << (int)std::numeric_limits<signed char>::lowest() << endl; // -128

    cout << sizeof(unsigned char) << endl;
    cout << (int)std::numeric_limits<unsigned char>::max() << endl; // 255
    cout << (int)std::numeric_limits<unsigned char>::lowest() << endl; // 0
    
    cout << c1 << c2 << int(c1) << int(c2) << endl;
    
    // c style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    // cpp style
    cout << char(65) << endl;
    cout << int('A') << endl;

    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    char ch(97);
    cout << ch << endl;
    cout << static_cast<int>(ch) << endl;
    cout << ch << endl;

    // buffer
    char c3(65);
    cin >> c3; // a b c
    cout << c3 << " " << static_cast<int>(c3) << endl; // a
    cin >> c3;
    cout << c3 << " " << static_cast<int>(c3) << endl; // b

    cout << "Hello \nWorld\n"; // cout << "Hello \n World";
    cout << int('\n') << endl; //buffer에 있는걸 무조건  출력하고 줄바꿈 (endl)

    cout << "Hello \tWorld\n";
    cout << int('\t') << endl;

    cout << "\"Hello \tWorld\"";

    return 0;
}