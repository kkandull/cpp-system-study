// Section 10 - 10.4 ~ 10.6
// Focus: container class
#include <iostream>
#include <initializer_list>
#include <cassert>

class IntArray
{
private:
    int m_length = 0;
    int *m_data = nullptr;
public:
    IntArray(unsigned length) : m_length(length) { m_data = new int [length]; }
    IntArray(const std::initializer_list<int> &list)
        : IntArray(list.size())
    {
        int count = 0;
        for (auto& ele : list)
        {
            m_data[count++] = ele;
        }
    }
    void reset()
    {
        delete[] this->m_data;
        m_data = nullptr;
        m_length = 0;
    }

    void resize(int new_length)
    {
        if(new_length == m_length) return;
        if (new_length <= 0) { reset(); return;}

        int *new_data = new int[new_length];

        int ele_copy = (new_length > m_length) ? m_length :new_length;
        for (int i = 0; i < ele_copy; i++)
            new_data[i] = m_data[i];
        
        delete[] m_data;
        m_data = new_data;
        m_length = new_length;

    }

    void insertBefore(const int & value, const int & idx)
    {
        assert (idx >= 0 && idx <= m_length);
        int *new_data = new int[m_length+1];

        for(int i = 0; i<idx; i++)
            new_data[i] = m_data[i];

        new_data[idx] = value;

        for (int i = idx; i < m_length; i++)
            new_data[i+1] = m_data[i];
        
        delete[] m_data;
        m_data = new_data;
        ++m_length;
    }

    void remove(const int & ix)
    {
        if (m_length <= 1) { reset(); return; }

        int *new_data = new int[m_length-1];

        for (int i = 0; i < ix; i++)
            new_data[i] = m_data[i];

        for (int i = ix; i < m_length-1; i++)
            new_data[i] = m_data[i+1];
            
        delete[] m_data;
        m_data = new_data;
        --m_length;
    }

    void push_back(const int & value)
    {   
       insertBefore(value, m_length);
    }

    friend std::ostream & operator << (std::ostream & out, const IntArray & my_arr)
    {
        for (int i = 0; i < my_arr.m_length; i++)
            out << my_arr.m_data[i] << " ";
        out << "\n";
        return out;
    }
    ~IntArray()
    {
        delete[] this->m_data;
    }
};

int main() 
{
    IntArray my_arr{1, 3, 5, 7, 9};
    std::cout << my_arr << "\n";
    my_arr.insertBefore(10, 1);
    std::cout << my_arr << "\n";
    my_arr.remove(3);
    std::cout << my_arr << "\n";
    my_arr.push_back(13);
    std::cout << my_arr << "\n";
    return 0;
}