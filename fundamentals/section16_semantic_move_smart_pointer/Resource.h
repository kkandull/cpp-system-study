#pragma once 
#include <iostream>
class Resource 
{
public:    
    int *m_data = nullptr;
    unsigned m_length = 0;
public:
    Resource()
    {
        std::cout << "Resource default Constructor" << "\n";
    }

    Resource(unsigned length)
    {
        std::cout << "Resource length constructed" << "\n";
        this->m_data = new int[length];
        this->m_length = length;
    }

    Resource(const Resource & res)
        : Resource(res.m_length)
    {
        std::cout << "Resource copy constructed" << "\n";

        for (unsigned i = 0; i < m_length; i++)
            m_data[i] = res.m_data[i];
    }

    ~Resource()
    {
        std::cout << "Resource Destructor" << "\n";
        if(m_data != nullptr) delete[] m_data;
    }

    Resource & operator = (Resource & res)
    {
        std::cout << "Resource copy assignment" << "\n";

        if(&res == this) return *this;

        if(this->m_data != nullptr) delete[] m_data;

        m_length = res.m_length;
        m_data = new int[m_length];

        for (unsigned i = 0; i < m_length; i++)
            m_data[i] = res.m_data[i];

        return *this;
    }

    void print()
    {
        for (unsigned i = 0; i < m_length; i++)
            std::cout << m_data[i] << " ";
        std::cout << "\n";
    }
    
    void setAll(const int v)
    {
        for (unsigned i = 0; i < m_length; i++)
            m_data[i] = v;
    }
    
};