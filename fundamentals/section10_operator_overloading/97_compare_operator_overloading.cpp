// Section 9 - 9.4 ~ 9.6
// Focus: overloading
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cent = 0) : m_cents(cent) {}
    int getCents() const {return m_cents; }
    int& getCents() {return m_cents; }
    friend bool operator == (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents == c2.m_cents;
    }
    friend std::ostream& operator << (std::ostream& out, const Cents &cent)
    {
        out << cent.m_cents;
        return out;
    }
    friend bool operator < (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents < c2.m_cents;
    }
    
};


int main() 
{
    std::vector<Cents> arr(20);
    for( unsigned i = 0; i < 20; ++i)
        arr[i].getCents() = i;
    
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr.begin(), arr.end(), g);

    for (const auto& e : arr) 
        std::cout << e << " ";
    std::cout << std::endl;

    Cents cents1(6);
    Cents cents2(6);
    if (cents1 == cents2) 
        std::cout << "Equal" << "\n";
    
    std::sort(std::begin(arr), std::end(arr));

    for (const auto& e : arr) 
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}