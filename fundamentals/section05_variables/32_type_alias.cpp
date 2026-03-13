// Section 5 - 4.7 ~ 4.10
// Focus: enum and struct
#include <iostream>
#include <vector>

int main() 
{
    using namespace std;
    
    typedef double distance_t;
    double my_distance;
    distance_t home2work;
    
    // typedef vector<pair<string, int> > pairlist_t;
    using pairlist_t = vector<pair<string, int> >;

    pairlist_t pairlist1;

    return 0;
}