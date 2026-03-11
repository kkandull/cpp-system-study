// Section 5 - 4.1 ~ 4.3
// Focus: variables and linkage
#include <iostream>

namespace work1::work11::work111
{
    int a = 1;
    void doSomething() 
    { 
        a += 3;
    }
}
namespace work2 
{
    int a = 1;
    void doSomething() 
    { 
        a += 5;
    }
}

int main() 
{
    using namespace std;
    
    int apple = 5;
    cout << apple << endl; // 5
    {
        int apple2 = 1;
        cout << apple2 << endl; // 1
    }
    cout << apple << endl; // 5

    work1::work11::work111::doSomething();

    cout << work2::a << endl;
    work2::doSomething();
    return 0;
}