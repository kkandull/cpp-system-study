// Section 7 - 7.7 ~ 7.10
// Focus: default parameters
#include <iostream>
#include <string>

void print(int x = 10, int y = 20, int z = 30);  // in header, default parameter

void print(int x , int y, int z) 
{
    std::cout <<  x << " " << y << " " << z << std::endl;
}

void printc(int x) {}
void printc(int x, int y) {}
// printc(10) 호출이 어느 함수인지 모호해져서 불가

int main() 
{
    using namespace std;
    
    print();
    print(100);
    print(100, 200);
    print(100, 200, 300);

    printc(10);

    return 0;
}