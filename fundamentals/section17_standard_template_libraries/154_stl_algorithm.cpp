// Section 16 - 16.1 ~ 16.3
// Focus: STL_algorithm
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() 
{
    // std::vector<int> container;
    std::list<int> container;
    for(int i=0; i < 10; i++)
        container.push_back(i);
    
    auto itr = std::min_element(container.begin(), container.end());
    std::cout << *itr << "\n";

    itr = std::max_element(container.begin(), container.end());
    std::cout << *itr << "\n";

    itr = std::find(container.begin(), container.end(), 3);
    container.insert(itr, 128);

    for (auto & e : container) std::cout << e << " ";
    std::cout << "\n";

    // std::sort(container.begin(), container.end());
    container.sort();

    for (auto & e : container) std::cout << e << " ";
    std::cout << "\n";

    // std::reverse(container.begin(), container.end());
    container.reverse();

    for (auto & e : container) std::cout << e << " ";
    std::cout << "\n";

    return 0;
}