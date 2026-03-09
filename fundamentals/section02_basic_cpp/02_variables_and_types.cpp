// Section 2 - 1.1 ~ 1.7
// Focus: program structure and scope fundamentals
#include <iostream>

int main(void) {
    int x = 1; // 변수 초기화(처음 공간이 만들어질 때 값을 넣음 ) 
    x = x + 2; // 변수 할당(이미 만들어진 공간의 값을 바꿈)
    std::cout << x << std::endl; // 3

    int y = x;
    std::cout << y << std::endl; // 3

    std::cout << x + y << std::endl; // 6

    std::cout << x << std::endl; // 3

    int z; // 쓰레기 값 들어갈 위험
    std::cout << z << std::endl; 
    
    return 0;
}