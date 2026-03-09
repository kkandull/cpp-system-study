// Section 4 - 3.1 ~ 3.4
// Focus: operators
#include <iostream>

int add(int a, int b) 
{
    return a + b;   
}
int main() 
{
    using namespace std;

    int x = 5;
    int y = ++x; // 먼저 증가 후 대입 
    int z = x--; // 먼저 대입 후 감소

    cout << y << endl;
    cout << z << endl;

    int i = 6, k = 6;
    cout << i << " " << k << endl; // 6 6
    cout << ++i << " " << --k << endl; // 7 5
    cout << i << " " << k << endl; // 7 5
    cout << i++ << " " << k-- << endl; // 7 5
    cout << i << " " << k << endl; // 8 6

    int j = 2, l = 3;
    int v = add(j--, ++l); // 2 + 4
    int q = add(j, --l); // 1 + 3
    cout << v << " " << q << endl;

    return 0;
}