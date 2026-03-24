// Section 7 - 7.3 ~ 7.6
// Focus: parameter passing by reference
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
void addOne(int &y)
{
    y = y + 1;
    std::cout << y << " " << &y << std::endl;
}

void getSinCos(const double degrees, double &sin_out, double &cos_out)
{
    static const double deg_to_rad = 3.141592 / 180.0;
    const double radians= degrees * deg_to_rad;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

void foo1(const int &x)
{
    cout << x << endl;
}

void foo2(int *&ptr)
{
    ptr = nullptr;
    cout << ptr << " " << &ptr << endl;
}

void printElement(const vector<int>& arr)
{
    for (const auto& elements : arr)
        cout << elements << " ";
}

int main() 
{
    
    int x = 5;
    cout << x << " " << &x << endl;

    addOne(x);

    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);

    cout << sin  << " " << cos << endl;

    foo1(6);

    int y = 5;
    int *ptr = &y;

    cout << ptr << " " << &ptr << endl;
    foo2(ptr);
    cout << ptr << " " << &ptr << endl;

    vector<int> arr{1,2,3,4,5};
    printElement(arr);
    
    return 0;
}