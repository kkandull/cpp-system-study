#pragma once 

#include <iostream>

template<class T>
class AutoPtr
{
public:
    T * m_ptr = nullptr;

public: 
    AutoPtr(T *ptr = nullptr)
        :m_ptr(ptr)
    {
        std::cout << "Autoptr default constructor" << "\n";
    }

    ~AutoPtr()
    {
        std::cout << "AutoPtr destructor" << "\n";
        if(m_ptr != nullptr) delete m_ptr;
    }

    /*AutoPtr(AutoPtr & a)
    {
        std::cout << "Autoptr copy constructor" << "\n";

        // deep copy
        m_ptr = new T;
        *m_ptr = *a.m_ptr;
    }

    AutoPtr & operator = (const AutoPtr & a)
    {
        std::cout << "AutoPtr copy assignment" << "\n";
        if(&a == this)
            return *this;
        
        if (m_ptr != nullptr) delete m_ptr;

        // deep copy
        m_ptr = new T;
        *m_ptr = *a.m_ptr;

        return *this;
    }*/

    T& operator*() const { return *m_ptr; }
    T* operator->() const { return m_ptr; }
    bool isNull() const { return m_ptr==nullptr; }

    AutoPtr(AutoPtr&& a)
        :m_ptr(a.m_ptr)
    {
        a.m_ptr = nullptr;
        std::cout << "AutoPtr move constructor" << "\n";
    }

    AutoPtr & operator = (AutoPtr && a)
    {
        std::cout << "AutoPtr move assignment" << "\n";

        if(&a==this) // prevent self-assignment
            return *this;

        if(m_ptr != nullptr) delete m_ptr;

        // shallow copy
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;

        return *this;

    }
};