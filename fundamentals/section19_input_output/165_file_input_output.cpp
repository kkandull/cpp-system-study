// Section 18 - 18.4 ~ 18.7
// Focus: file in/output
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

int main() 
{
    {
        // writing
        std::ofstream ofs("my_first_file.txt", std::ios::binary); // ios::app(계속 추가함 초기화 하지 않고), ios::binary
        // ofs.open("my_first_file.txt")
        if(!ofs)
        {
            std::cerr << "Couldn't open file" << "\n";
            exit(1);
        }

        // ofs << "Line1" << "\n";
        // ofs << "Line2" << "\n";

        const unsigned num_data = 10;
        ofs.write((char*)&num_data, sizeof(num_data));

        for (int i = 0; i < num_data; ++i)
            ofs.write((char*)&i, sizeof(i));

    }

    {
        // reading 
        std::ifstream ifs("my_first_file.txt");

        if(!ifs)
        {
            std::cerr << "Couldn't open file" << "\n";
            exit(1);
        }

        /*
        while(ifs)
        {
            std::string str;
            std::getline(ifs, str);
            std::cout << str << "\n";
        }
        */
        unsigned num_data = 0;
        ifs.read((char*)&num_data, sizeof(num_data));

        for(unsigned i = 0; i < num_data; ++i)
        {
            int num;
            ifs.read((char*)&num, sizeof(num));
            
            std::cout << num << "\n";
        }
    }
    return 0;
}