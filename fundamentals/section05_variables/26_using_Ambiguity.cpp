// Section 5 - 4.1 ~ 4.3
// Focus: variables and linkage
#include <iostream>

namespace a
{
    int my_var(10);
    int count(3);
}

namespace b
{
    int my_var(20);
}

int main() 
{
    using namespace std;

    {
        using namespace a;
        cout << my_var << endl;
        cout << a::count << endl;
    }

    {
        using namespace b;
        cout << my_var << endl;
    }

    using namespace a;
    using namespace b;

    cout << a::my_var << endl;
    cout << b::my_var << endl;

    return 0;
}