// Section 18 - 18.4 ~ 18.7
// Focus: regex
#include <iostream>
#include <regex>

int main() 
{   
    // 반복문 외부에서 생성하는게 좋음
    // std::regex re("\\d");
    // std::regex re("[ab]");
    // std::regex re("[[:digit:]]{3}");
    // std::regex re("[A-Z]+");
    // std::regex re("[A-Z]{1,5}");
    // std::regex re("([0-9]{1})([-]?)([0-9]{1,4})");
    // std::regex re("([0-9]{3})([-])([0-9]{4})([-])([0-9]{4})");
    std::regex re("([a-z]+)([@])([a-z]+)([.])([a-z]+)");
    std::string str;

    while(true)
    {
        std::getline(std::cin, str);

        if(std::regex_match(str, re))
            std::cout << "Match" << "\n";
        else 
            std::cout << "No match" << "\n";

        // print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();

            for(auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;
                std::cout << match.str() << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}