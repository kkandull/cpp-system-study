// Section 8 - 8.4 ~ 8.6
// Focus: initializer list
#include <iostream>

using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int& m_b_in)
        : m_b(m_b_in)
    {

    }
};

class Something
{
private:
    int m_i = 4; 
    double m_d = 100.0;
    char m_c = 'c';
    int my_arr[5]{100,200,300,400,500};
    B m_b;

public: 
    Something()
        : m_i{3}, m_d{3.14}, m_c{'a'}, my_arr{1,2,3,4,5}, m_b{m_i - 1} // 먼저 초기화 리스트로 멤버가 초기화되고,
    {   // 그 다음 생성자 본문이 실행된다.
        m_i *= 2;
        m_d *= 2.0;
        m_c += 1;
    }
    void print() const
    {
        cout << m_i << " " << m_d << " " << m_c << " "  << endl;
        for (const auto& ele : my_arr) 
            cout << ele << " ";
        cout << endl;
    }
    
};

int main() 
{
    Something some;
    some.print();
    
    return 0;
}