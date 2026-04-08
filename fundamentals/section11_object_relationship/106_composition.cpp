// Section 10 - 10.1 ~ 10.3
// Focus: overloading
#include "Monster.h"

int main() 
{
    Monster mon1("Sanson", Position2D(0, 0));
    std::cout << mon1 << "\n";
    {
        mon1.moveTo(Position2D(1,1));
        std::cout << mon1 << "\n";
    }
    return 0;
}