// Section 2 - 1.8 ~ 1.14
// Focus: operators and namespace
#include <iostream>

using namespace std; 

int main() 
{   
    // asignment
    int x = -1; 

    // 삼항 연산자
    int y = ( x > 0 ) ? 1 : 2; // 크면 1, 작으면 2
    cout << x + 2 << endl; // operand
    cout << y << endl; 

    int a = 1;
    int b = 2;
    int c = a > b ? a : b; // 괄호 없어도 작 작동함 ?연산자가 우선순위가 낮기 때문 
    cout << c << endl;
    return 0; // indenting
}