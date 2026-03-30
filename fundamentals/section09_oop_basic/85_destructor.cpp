// Section 8 - 8.4 ~ 8.6
// Focus: destructor
#include <iostream>

using namespace std;

class Simple
{
private:
    int m_id;
public:
    Simple(const int& id_in)
        : m_id(id_in)
    {
        cout << "Constructor " << m_id << endl;
    }
    ~Simple()
    {
        cout << "Destructor " << m_id << endl;
    }

};

class IntArray
{
private:
    int m_length = 0;
    int *m_arr = nullptr;
public:
    IntArray(int length_in)
        : m_length(length_in), m_arr(new int[m_length])
    {
        cout << "IntArray constructor" << endl;
    }
    ~IntArray() // 없으면 memory leak
    {
        if (m_arr != nullptr)
            delete[] m_arr;
    }
    int size() const
    {
        return m_length;
    }
};



int main() 
{
    Simple *s1 = new Simple(1); // 동적 객체는 delete할 때 소멸자가 호출되고,
    Simple s2(2); // 지역 객체 s2는 스코프 끝날 때 호출된다.

    delete s1;

    while (true)
    {
        // 소멸자가 있으면 반복 생성/소멸에서도 메모리가 회수된다
        IntArray my_int_array(10000);
    }
    return 0;
}