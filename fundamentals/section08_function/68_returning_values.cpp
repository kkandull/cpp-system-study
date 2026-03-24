// Section 7 - 7.3 ~ 7.6
// Focus: returning values
#include <iostream>
#include <array>
#include <tuple>

int& get(std::array<int, 100>& my_array, int ix)
{
    return my_array[ix];
}

std::tuple<int, double> getTuple()
{
    int a = 10;
    double d = 3.14;
    return std::make_tuple(a, d);
}

int main() 
{
    using namespace std;
    
    std::array<int, 100> my_array;
    get(my_array, 30) = 1024;

    cout << my_array[30] << endl;

    std::tuple<int, double> my_tp = getTuple();
    cout << std::get<0>(my_tp) << endl; // a
    cout << std::get<1>(my_tp) << endl; // b

    /* c++ 17
    auto[a, d] = getTuple();
    cout << a << endl;
    cout << d << endl; */

    return 0;
}