// Section 14 - 14.1 ~ 14.3
// Focus: exceptional handling
#include <iostream>
#include <string>
#include <cmath>
int main() 
{
    double x;
    std::cin >> x;

    try
    {
        if ( x < 0.0) throw std::string("negative input");
        std::cout << sqrt(x) << "\n";
    }
    catch(const std::string & error_message)
    {
        std::cout << error_message << '\n';
    }
    
    try
    {
        throw std::string("Hello");
    }
    catch(int x)
    {
        std::cout << "Catch integeer" << x << "\n";
    }
    catch(double x)
    {
        std::cout << "Catch double" << x << "\n";
    }
    catch(const char * error_message)
    {
        std::cout << "Catch char" << error_message << "\n";
    }
    catch(const std::string & error_message)
    {
        std::cout << error_message << "\n";
    }
    
    
    return 0;
}