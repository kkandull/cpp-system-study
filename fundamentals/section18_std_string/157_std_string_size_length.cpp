// Section 17 - 17.3 ~ 17.5
// Focus: string
#include <iostream>
#include <string>

int main() 
{
    std::string my_str("012345678");
    my_str.reserve(1000);
    std::cout << my_str.size() << "\n";
    std::cout << my_str.length() << "\n";
    std::cout << my_str.capacity() << "\n"; // 1000만큼 확보
    std::cout << my_str.max_size() << "\n";

    std::string em_str("");
    std::cout << std::boolalpha;
    std::cout << em_str.empty() << "\n"; 

    return 0;
}