#pragma once
#include <iostream>
#include <assert.h>

template<class T>
class MyArray
{
private: 
    int m_length;
    T *m_data;
public: 
    MyArray()
    {
        m_length = 0;
        m_data = nullptr;
    }

    MyArray(int length)
    {
        m_data = new T[length];
        m_length = length;
    }

    MyArray(const MyArray& source) = delete;
    MyArray& operator=(const MyArray& source) = delete;
    
    ~MyArray()
    {
        reset();
    }

    void reset()
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    T & operator [] (int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    int getLength() const
    {
        return m_length;
    }

    void print();
    
};
