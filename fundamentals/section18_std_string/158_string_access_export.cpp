// Section 17 - 17.3 ~ 17.5
// Focus: string
#include <iostream>
#include <vector>
#include <string>

int main() 
{
    std::string my_str("kkandull");

    try
    {
        // my_str[100];
        my_str.at(100) = 'x';
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << "\n";
    }
    
    std::cout << my_str.data() << "\n";

    const char * arr = my_str.data();

    std::cout << static_cast<int>(arr[7]) << "\n";
    std::cout << static_cast<int>(arr[8]) << "\n";

    char buf[20];
    my_str.copy(buf, 5, 1);
    buf[5] = '\0';
    std::cout << buf << "\n";
    return 0;
}