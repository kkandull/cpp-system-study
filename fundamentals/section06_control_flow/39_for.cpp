// Section 5 - 5.7 ~ 5.10
// Focus: for and break and continue
#include <iostream>

int power(int base, int exponent) // 정수 거듭제곱
{
    int result = 1;
    for ( int count = 0; count < exponent; ++count)
    {
        result *= base;
    }
    return result;
}

int main() 
{
    using namespace std;
    
    int i = 0;
    for(; i < 10; ++i) // iteration
    //while (true)
    //for(;;++i)
    {
        cout << i << endl;
    }
    cout << i << endl;

    cout << power(2,4) << endl;

    int k = 0, j = 0;
    for ( ; (j+k) < 10; ++k, j+=2)
    {
        cout << k << " " << j << endl;
    }
    return 0;
}