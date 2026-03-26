// Section 7 - 7.11 ~ 7.13
// Focus: recursive function call
#include <iostream>

using namespace std;

void countDown(int x)
{   
    cout << x << endl;
    if (x > 0)
        countDown(x-1);

}

int sumTo(int sumto)
{
    if(sumto <= 0)
        return 0;
    else if (sumto == 1)
        return 1;
    else 
        return sumTo(sumto-1) + sumto;
}

// recursive fibonacci is simple but inefficient due to repeated calculations
int fibonacci(int n)
{   
    if (n <= 1) return n;
    else 
        return fibonacci(n-1) + fibonacci(n-2);
    
        
}
int main() 
{
    countDown(3);
    cout << sumTo(10) << endl;
    for (int i = 0; i < 10; ++i)
        cout << fibonacci(i) << " ";
    cout << endl;
    return 0;
}