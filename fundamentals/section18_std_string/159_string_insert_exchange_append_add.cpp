// Section 17 - 17.3 ~ 17.5
// Focus: string
#include <iostream>
#include <string>

int main() 
{
    std::string str1("one");
    str1 += "four";
    str1.push_back('A');

    std::string str2;
    str2 = str1;
    str2 = "two";
    str2.assign("two ", 2).append("three");
    std::cout << str2 << "\n";

    std::swap(str1, str2);

    std::cout << str1 << " " << str2 << "\n";

    str1.swap(str2);
    std::cout << str1 << " " << str2 << "\n";

    std::string str("aaa");
    str.insert(2, "bbb"); // 매우 긴 문자열은 중간 삽입 피하는게 좋음 
    std::cout << str << "\n";
    return 0;
}