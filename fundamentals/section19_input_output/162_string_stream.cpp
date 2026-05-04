// Section 18 - 18.1 ~ 18.3
// Focus: string stream
#include <iostream>
#include <sstream>

int main() 
{
    std::stringstream os;

    os << "Hello World " << "\n"; // << : insertion operatorm >> : extraction operator
    // os.str("Hello World"); // 싹 갈아엎어버림
    os << "Hello World2\n"; // 덧붙이기

    std::string str;

    str = os.str();

    std::cout << str << "\n";
    
    os.str("");
    int i = 12345;
    double d = 67.89;
    // 빈칸으로 구분 
    os << i << " " <<  d;
    std::string str1;
    std::string str2;

    os >> str1 >> str2;

    std::cout << str1 << "|" << str2 << "\n";

    os.str(""); // 1. 내부 문자열 버퍼를 싹 비움 (물리적 청소)
    os.clear(); // 2. 내부 에러 플래그(EOF 등)를 정상으로 리셋 (논리적 청소)
    int i1 = 12345;
    double d1 = 67.89;
    os << i1 << " " <<  d1;

    int i2;
    double d2;

    os >> i2 >> d2;
    std::cout << i2 << "|" << d2 << "\n";
    return 0;
}