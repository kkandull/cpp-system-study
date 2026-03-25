// Section 7 - 7.7 ~ 7.10
// Focus: function overloading
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

void getRandom(int &x) {x = 1;}
void getRandom(double &x) {x = 3.14;}


typedef int my_int;
// 같은 함수 
// void print(int x) {}
// void print(my_int x ) {}

void print(unsigned int value) {}
void print(float value) {}

int main() 
{
    using namespace std;
    
    // 컴파일할때 결정 
    cout << add(1, 2) << endl;
    cout << add(3.0, 4.0) << endl;

    int x;
    getRandom(x);

    // int x = getRandom(x);
    // int x = getRandom(int());

    // 매치가 애매한 경우
    // print('a');
    // print(0);
    // print(3.141592);
    print(float('a'));
    print(0u);
    print(3.141592f);

    return 0;
}