// Section 18 - 18.4 ~ 18.7
// Focus: file aribitary position access
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

int main() 
{
    const std::string filename = "my_file.txt";

    {
        std::ofstream ofs(filename);

        for(char i = 'a'; i <= 'z'; ++i)
            ofs << i;
        ofs << "\n";
    }

    {
        std::ifstream ifs("my_file.txt");

        ifs.seekg(5);
        std::cout << static_cast<char>(ifs.get()) << "\n";

        ifs.seekg(5, std::ios::cur); // 읽어드린 위치에서 +5
        std::cout << static_cast<char>(ifs.get()) << "\n";
        
        /*
        ifs.seekg(-5, std::ios::end); -> x
        std::cout << static_cast<char>(ifs.get()) << "\n";

        ifs.seekg(0, std::ios::end); -> 28
        std::cout << ifs.tellg() << "\n";
        */

        std::string str;
        std::getline(ifs, str);
        std::cout << str << "\n";
    }

    {
        std::fstream iofs(filename);
        iofs.seekg(5); // 파일 읽기 커서 옮길때 
        std::cout << static_cast<char>(iofs.get()) << "\n";

        iofs.seekp(5); // 파일 쓰기 커서 옮길때
        iofs.put('A');
    }
    // abcdeAghijklmnopqrstuvwxyz

    return 0;
}