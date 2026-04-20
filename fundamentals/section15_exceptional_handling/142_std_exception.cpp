// Section 14 - 14.4 ~ 14.6
// Focus: std::exception
#include <iostream>
#include <exception>
#include <string>

class CustomException : public std::exception 
{
public:
    const char * what() const noexcept override
    {
        return "Custom exception";
    }
};
int main() 
{
    try
    {
        // std::string s;
        // s.resize(-1);
        //throw std::runtime_error("Bad thing happend");
        throw CustomException();
    }
    catch(const std::length_error & exception)
    {
        std::cerr << "Length_Error" << "\n";
        std::cerr << exception.what() << '\n';
    }
    catch(const std::exception & exception)
    {
        std::cout << typeid(exception).name() << '\n';
        std::cerr << exception.what() << '\n';
    }
    
    
    return 0;
}