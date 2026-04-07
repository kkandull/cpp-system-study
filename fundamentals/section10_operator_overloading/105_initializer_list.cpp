// Section 9 - 9.10 ~ 9.12
// Focus: overloading

#include <iostream>
#include <cassert>
#include <initializer_list>

class IntArray
{
private:
    unsigned m_length = 0;
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

        // for (unsigned count = 0; cout < list.size(); ++count)
        //      m_data[count] = list[count] -> error
    }
    IntArray(const IntArray& source)
    : m_length(source.m_length)
{
    if (source.m_data != nullptr)
    {
        m_data = new int[m_length];
        for (unsigned i = 0; i < m_length; ++i)
            m_data[i] = source.m_data[i];
    }
    else
        m_data = nullptr;
    }

    IntArray& operator = (const IntArray& source)
    {
        std::cout << "Assignment operator" << "\n";

        if( this == &source) // prevent self-assignment
            return *this;

        delete[] m_data;

        m_length = source.m_length;

        if(source.m_data != nullptr)
        {
            m_data = new int[m_length];
            for (unsigned i = 0; i < m_length; ++i)
                m_data[i] = source.m_data[i];

        }
        else 
            m_data = nullptr;
        return *this;
    }
    
    friend std::ostream & operator << (std::ostream & out, const IntArray & arr)
    {
        for (unsigned i = 0; i < arr.m_length; i++)
            out << arr.m_data[i] << " ";
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
    int my_array1[5] = { 1, 2, 3, 4, 5};
    int *my_array2 = new int[5]{1, 2, 3, 4, 5};

    auto il = { 10, 20, 30};

    IntArray int_array { 1, 2, 3, 4, 5, 7, 8, 9};
    std::cout << int_array << "\n";

    IntArray arr3(8);
    arr3 = int_array;
    std::cout << arr3 << "\n";
    

    return 0;
}