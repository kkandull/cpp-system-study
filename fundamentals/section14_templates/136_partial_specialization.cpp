// Section 13 - 13.5 ~ 13.8
// Focus: specialization
#include <iostream>
#include <cstring>

template<typename T, int size>
class StaticArray_Base
{
private:
    T my_array[size];
public:
    T * getArray() { return my_array; }

    T& operator[] (int index)
    {
        return my_array[index];
    }

    void print()
    {
        for(int i = 0; i < size; i++)
            std::cout << (*this)[i] << " ";
        std::cout << "\n";
    }
};

template<class T, int size>
class StaticArray : public StaticArray_Base<T, size>
{};

template<int size>
class StaticArray<char, size> : public StaticArray_Base<char, size>
{
public:
    void print() 
    {
        std::cout << this->getArray() << "\n"; 
    }
};

int main() 
{
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();

    StaticArray<char, 14> char14;
    char14[0] = 'H';
    char14[1] = 'e';

    std::strncpy(char14.getArray(), "Hello, World", 14);
    
    char14.print();
    return 0;
}