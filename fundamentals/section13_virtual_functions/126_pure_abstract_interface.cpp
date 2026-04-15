// Section 12 - 12.4 ~ 12.7
// Focus: pure abstract interface
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string m_name;
public:
    Animal(const std::string name)
        : m_name(name)
    {}

    std::string getName() const { return m_name; }

    virtual void speak() const = 0; // pure virtual function no body

    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    Dog(const std::string & name)
        :Animal(name) 
    {}
    void speak() const 
    {
        std::cout << m_name << " Woof" << "\n";
    }
};

class Cat : public Animal
{
public:
    Cat(const std::string & name)
        :Animal(name) 
    {}
    
    void speak() const 
    {
        std::cout << m_name << " Meow" << "\n";
    }
};

class Cow : public Animal 
{
public: 
    Cow(const std::string & name)
        : Animal(name)
    {}

    virtual void speak() const override
    {
        std::cout << m_name << " mmm" << "\n";
    }
};




int main() 
{
    Cow cow("ying");
    cow.speak();

    return 0;
}