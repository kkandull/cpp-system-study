// Section 9 - 9.4 ~ 9.6
// Focus: overloading
#include <iostream>
#include <cassert>
class IntList
{
private:
    int m_list[10] = {1,2,3,4,5,6,7}; // 나머지 0 초기화
public:
    int & operator [] (int index)
    {
        assert(index >= 0 && index < 10);
        return m_list[index];
    }
    const int & operator [] (int index) const
    {
        assert(index >= 0 && index < 10);
        return m_list[index];
    }
};

int main() 
{
    const IntList my_list;
    //my_list[3] = 10;
    std::cout << my_list[3] << "\n";
    


    return 0;
}