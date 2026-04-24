// Section 15 - 15.2 ~ 15.4
// Focus: Rvalue
#include <iostream>

void doSomething(int &lref)
{
    std::cout << "L-value" << "\n";
}

void doSomething(int &&rref)
{
    std::cout << "R-value" << "\n";
}

int getSomething()
{
    return 100 * 100;
}

int main() 
{
    int x = 5;
    int y = getSomething();
    const int cx = 10;
    const int cy = getSomething();

    // L value reference

    int &lr1 = x; // modifiable L values
    // int &lr2 = 5; // R values
    // int &lr3 = cx; // non modifiable L values

    const int &lr4 = x; // modifiable L values
    const int &lr5 = cx; // non modifiable L values
    const int &lr6 = 5; // R values
    
    // R value refernce

    // int &&rr1 = x; // modifiable L values
    // int &&rr1 = cx; // non modifiable L values
    int &&rr1 = 5; // R values

    // const int &&rr4 = x;  // modifiable L values
    // const int &&rr4 = cx;  // non modifiable L values
    const int &&rr6 = 5; // R values

    // L/R value refernce parameters

    // L-value
    doSomething(x);
    // R-value
    doSomething(5);
    doSomething(getSomething());
    
    return 0;
}