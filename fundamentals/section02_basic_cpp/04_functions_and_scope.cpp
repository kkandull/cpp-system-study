// Section 2 - 1.1 ~ 1.7
// Focus: program structure and scope fundamentals
#include <iostream>

using namespace std;
// 함수 안에 함수 불가 
// define function
int addNum(int num_a, int num_b) 
{
    int sum = num_a + num_b;
    return sum;
}

void printHelloWorld() 
{
    cout << "Hello World" << endl;
    return;
    cout << "Hello World" << endl; // return 때문에 실행 안됨
}
int main() 
{
    cout << addNum(1,2) << endl;
    printHelloWorld();
    
    // scope
    int x(0); // int x = 0;
    cout  << x << " " << &x << endl; // & 주소 출력 
    {
        x = 1; 
        cout << x << " " << &x << endl; // 위의 x의 주소 나옴 
        int x = 1; // 다른 메모리의 식별자 
        cout  << x << " " << &x << endl;
        // 영역 나오는 순간 사용 못함 
    }
    cout  << x << " " << &x << endl; // & 주소 출력 
    {
        int x = 2;
        cout  << x << " " << &x << endl;
    }

    return 0;
}