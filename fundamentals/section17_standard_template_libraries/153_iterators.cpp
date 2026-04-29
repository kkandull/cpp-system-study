// Section 16 - 16.1 ~ 16.3
// Focus: iterators
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int main() 
{
    std::map<int, char> container;

    for(int i = 0; i < 10; i++)
        container.insert(std::make_pair(i, char(i+65)));
        //container.insert(i);
        //container.push_back(i);

    for (auto itr = container.begin(); itr != container.end(); ++itr)
        std::cout << itr->first << " " << itr->second << " ";
        //std::cout << *itr << " ";
    std::cout << "\n"; 
    
    return 0;
}