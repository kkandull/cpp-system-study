// Section 5 - 5.7 ~ 5.10
// Focus: for and break and continue
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

int main() 
{
    using namespace std;
    
    std::srand(5323); // seed
    //std::srand(static_cast<unsigned int>(std::time(0)));

    for (int count = 1; count <= 100; ++count)
    {
        cout << std::rand() << "\t";
        if (count % 5 == 0) cout << endl;
    }

    std::random_device rd;
    std::mt19937 mersenne(rd()); // create amesenne twister
    std::uniform_int_distribution<> dice(1,6);

    for (int i = 1; i <= 20; i++) 
    {
        cout << dice(mersenne) << "\t";
        if (i % 5 == 0) cout << endl;
    }

    return 0;
}