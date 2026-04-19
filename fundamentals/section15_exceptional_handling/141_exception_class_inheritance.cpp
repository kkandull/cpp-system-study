// Section 14 - 14.1 ~ 14.3
// Focus: exceptional class and heritance
#include <iostream>

class Exception
{
public:
    virtual void report() const 
    {
        std::cout << "Exception report" << "\n";
    }
    virtual ~Exception() = default;
};

class ArrayException : public Exception
{
public: 
    void report() const override
    {
        std::cout << "Array Exception report" << "\n";
    }
};

class MyArray
{
private:
    int m_data[5];
public:
    int & operator [] (const int index)
    {
        if(index < 0 || index >= 5) throw ArrayException();

        return m_data[index];
    }
    
};

void doSomething()
{
    MyArray my_array;

    try
    {
        my_array[100];
    }
    /*catch(ArrayException & e)
    {
        std::cout << "doSomething()" << "\n";
        e.report();
    }*/
    catch(Exception & e)
    {
        std::cout << "doSomething()" << "\n";
        e.report();
        throw;
    } 
}

int main() 
{
    try 
    {
        doSomething();
    }
    catch(ArrayException & e)
    {
        std::cout << "main()" << "\n";
        e.report();
    }
    catch(Exception & e)
    {
        std::cout << "main()" << "\n";
        e.report();
    }
    
    return 0;
}