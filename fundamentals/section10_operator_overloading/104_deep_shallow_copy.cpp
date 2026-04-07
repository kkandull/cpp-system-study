// Section 9 - 9.10 ~ 9.12
// Focus: overloading

#include <iostream>
#include <cassert>
#include <cstring>
class MyString
{
public:
    char *m_data = nullptr;
    int m_length = 0;
public:
    MyString(const char* source = "")
    {
        assert(source);
        m_length = std::strlen(source) + 1;
        m_data = new char[m_length];

        for (int i = 0; i < m_length; ++i)
            m_data[i] = source[i];
        m_data[m_length - 1] = '\0';
    }

    // MyString(const MyString &source) = delete;
    MyString(const MyString &source)
    {
        std::cout << "Copy constructor" << "\n";

        m_length = source.m_length;

        if(source.m_data != nullptr)
        {
            m_data = new char[m_length];
            for (int i = 0; i < m_length; ++i)
                m_data[i] = source.m_data[i];

        }
        else 
            m_data = nullptr;
    }
    MyString& operator = (const MyString& source)
    {
        std::cout << "Assignment operator" << "\n";

        if( this == &source) // prevent self-assignment
            return *this;

        delete[] m_data;

        m_length = source.m_length;

        if(source.m_data != nullptr)
        {
            m_data = new char[m_length];
            for (int i = 0; i < m_length; ++i)
                m_data[i] = source.m_data[i];

        }
        else 
            m_data = nullptr;
        return *this;
    }
    ~MyString()
    {
        delete[] m_data;
    }
    char* getString() const {return m_data;}
    int getLength() const {return m_length;}
};


int main() 
{
    MyString hello("Hello");
    std::cout << (int*)hello.m_data << "\n";
    std::cout << hello.getString() << "\n";
    {
        MyString copy = hello;
        std::cout << (int*)copy.m_data << "\n";
        std::cout << copy.getString() << "\n";
    }
    MyString str1 = hello; // copy constructor
    MyString str2;
    str2 = hello; // assignment operator
    std::cout << hello.getString() << "\n";
    return 0;
}