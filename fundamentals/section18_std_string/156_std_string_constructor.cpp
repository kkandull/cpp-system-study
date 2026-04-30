// Section 17 - 17.1 ~ 17.2
// Focus: string
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

template <typename T>
std::string ToString(T x)
{
    std::ostringstream osstream;
    osstream << x;
    return osstream.str();
}

template <typename T>
bool FromString(const std::string & str, T &x)
{
    std::istringstream isstream(str);
    return (isstream >> x) ? true : false;
}

int main() 
{
    std::string my_string("my String");
    // std::string(str, pos, len)
    std::string second_string(my_string, 4, 1); // t
    std::string third_string(10, 'A');

    std::cout << second_string << "\n";
    std::cout << third_string << "\n";
    
    std::vector<char> vec;

    for (auto e : "Today is happy day") 
        vec.push_back(e);

    std::string vec_string1(vec.begin(), vec.end());
    std::cout << vec_string1 << "\n";

    // reverse
    std::string vec_string1_1(vec.rbegin(), vec.rend());
    std::cout << vec_string1_1 << "\n";

    std::string vec_string2(vec.begin(), std::find(vec.begin(), vec.end(), 'p'));
    std::cout << vec_string2 << "\n";

    std::string my_str(std::to_string(1004));
    std::cout << my_str << "\n"; // str

    my_str += std::to_string(2008);
    std::cout << my_str << "\n";

    int i = std::stoi(my_str);
    std::cout << i << "\n"; // int

    float f = std::stof(my_str);
    std::cout << f << "\n"; // float
    
    std::string m_str(ToString(3.141592));
    std::cout << m_str << "\n";

    double d;
    //std::string m_str2("Hello"); // 문자열 넣으면 안됨

    if(FromString(m_str, d))
        std::cout << d << "\n";
    else 
        std::cout << "Cannot convert string to double" << "\n";
        
    return 0;
}