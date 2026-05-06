// Section 18 - 18.4 ~ 18.7
// Focus: validation
#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

void printCharacterClassification(const int i)
{   
    std::cout << std::boolalpha;
    std::cout << "isalnum " << bool(std::isalnum(i)) << "\n";
    std::cout << "isblank " << bool(std::isblank(i)) << "\n";
    std::cout << "isdigit " << bool(std::isdigit(i)) << "\n";
    std::cout << "islower " << bool(std::islower(i)) << "\n";
    std::cout << "isupper " << bool(std::isupper(i)) << "\n";
}
void PrintStates(const std::ios & stream)
{
    std::cout << "good()= " << stream.good() << "\n";
    std::cout << "eof()= " << stream.eof() << "\n";
    std::cout << "fail()= " << stream.fail() << "\n";
    std::cout << "bad()= " << stream.bad() << "\n";
}

bool isAlldigit(const std::string & str)
{
    bool ok_flag = true;

    for (char e : str)
        if(!std::isdigit(e))
        {
            ok_flag = false;
            break;
        }
    return ok_flag;
}

int main() 
{
    while (true)
    {
        char i;
        std::cin >> i;

        PrintStates(std::cin);
        /*
        std::cout << std::boolalpha;
        std::cout << std::bitset<8>(std::cin.rdstate()) << "\n";
        std::cout << std::bitset<8>(std::istream::goodbit) << "\n";
        std::cout << std::bitset<8>(std::istream::failbit) << "\n";
        std::cout << !bool((std::cin.rdstate() & std::istream::failbit) != 0) << "\n";
        */

        printCharacterClassification(i);
        std::cin.clear();
        std::cin.ignore(1024, '\n');
        std::cout << "\n";
    }

    std::cout << std::boolalpha;
    std::cout << isAlldigit("1234") << "\n"; // true
    std::cout << isAlldigit("a1234") << "\n"; // false
    
    return 0;
}