// Section 5 - 5.1 ~ 5.6
// Focus: if and while
#include <iostream>

using namespace std;

enum Color 
{
    BLACK, 
    RED,
    BLUE,
    GREEN,
};

void printColor(Color color) 
{
    switch (static_cast<int>(color)) 
    {
        case 0 :
            cout << "Black" << endl;
            break;
        case 1 :
            cout << "Red" << endl;
            break;
    }
}

int main() 
{
    
    printColor(Color::BLACK);


    int x; 
    cin >> x;

    switch (x)
    {
        case 0:
            cout << "Zero";
            break; // break 없으면 다 나옴
        case 1:
            cout <<"One";
            break;
        case 2:
            cout << "Two";
            break;
    }
    cout << endl;


    switch (x) 
    {
        int a; // 선언은 가능 
        //int b = 5; // 값 대입은 case문 뒤에서
        case 0 :
            int y;
            break;
        case 1 :
            y = 5;
            cout << y << endl;

        default :
            cout << "Undefined input" << x << endl;
            // break;
    }
    return 0;
}