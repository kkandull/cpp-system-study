// Section 5 - 5.1 ~ 5.6
// Focus: if and while
#include <iostream>


int num_min(int x, int y) 
{
    return (x > y) ? y : x;
}

int main() 
{
    using namespace std;

    int x;
    cin >> x;

    if ( x > 10)
    {
        cout << x << " is greater than 10" << endl;
    }  
    else if ( x < 10)
    {
        cout << x << " not greater than 10" << endl;
    }

    cout << num_min(3, 4) << endl;

    if ( x == 10)   
        return 0;

    if(1) 
        int x = 5; // if scope 안 변수 
    else 
        int x = 6;

    cout << x << endl; 

    if(x > 1); // 실수로 세미콜론을 붙이면 if가 아무 일도 하지 않음

    return 0;
}