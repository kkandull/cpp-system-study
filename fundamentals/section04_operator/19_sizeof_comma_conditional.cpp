// Section 4 - 3.1 ~ 3.4
// Focus: operators
#include <iostream>

int main() 
{
    using namespace std;

    // sizeof
    float u;

    cout << sizeof(u) << " " <<  sizeof(float) << endl; // 4byte, 32bit

    // comma operator
    int x = 3;
    int y = 10;
    int z = (++x, ++y);
   

    cout << x << " " << y << " " << z << endl;

    int a = 1, b = 10;
    int k;
    int q;
    k = (++a, a + b);
    q = ++a, b; // (q = ++a), b;
    cout << k << endl;
    cout << q << endl;

    // conditional operator
    bool OnSale = true;
    const int price = (OnSale == true) ? 10 : 100;
    cout << price << endl;

    int w = 10;
    //cout << ( w % 2 == 0) ? "Even" : "Odd" << endl; -> (cout << ( w % 2 == 0)) ? "Even" : ()"Odd" << endl);
    cout << (( w % 2 == 0) ? "Even" : "Odd") << endl;
    return 0;
}