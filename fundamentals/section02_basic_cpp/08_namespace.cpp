// Section 2 - 1.8
// Focus: operators and namespace
#include <iostream>

namespace Myspace1
{
    namespace Innerspace 
    {
        int my_fuc()
        {
            return 0;
        }

    }
    int dos(int a, int b) 
    {
        return a + b;
    }
    
} 

int dos(int a, int b) 
{
    return a * b;
}

using namespace std;

int main() 
{
    using namespace Myspace1::Innerspace;

    my_fuc();

    cout << Myspace1::dos(3,4) << endl;
    cout << dos(3,4) << endl;
}
