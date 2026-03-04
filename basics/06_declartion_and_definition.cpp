#include <iostream>

using namespace std;

int add(int a, int b); // forward declartion
int mul(int a, int b);

int main() 
{
    cout << add(1,2) << endl;
    cout << mul(3,4) << endl;
    return 0;
}

// definition
int add(int a, int b) {
    return a + b; 
}

int mul(int a, int b)
{
    return a * b;
}