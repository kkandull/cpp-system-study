// Section 5 - 4.4 ~ 4.6
// Focus: string and conversion
#include <iostream>
#include <string>
#include <limits>

int main() 
{
    using namespace std;
    
    const char my_strs [] = "Hello, World";
    const string my_hello{ "Hello, World" };

    string my_ID = "123";
    cout << my_ID.length() << endl;

    cout << my_hello << endl;
    cout << my_strs << endl;

    cout << "Your age ? : ";
    int age;
    cin >> age;
    //std::getline(std::cin, age);

    // std::cin.ignore(32767, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Your name ? : ";
    string name;
    // cin >> name;
    std::getline(std::cin, name);

    cout << name << " " << age << endl;

    string a("Hello, ");
    string b("World");
    string hw = a + b;
    hw += " I'm good";

    cout << hw << endl;
    cout << hw.length() << endl;

    return 0;
}