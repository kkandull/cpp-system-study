// Section 12 - 12.1 ~ 12.3
// Focus: polymorphism
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
    virtual void speak() const
    {
        std::cout << m_name << " ???" << "\n";
    }
    virtual ~Animal() = default; // "부모 포인터로 쓰일 가능성이 있는 클래스는 무조건 가상 소멸자를 단다"
};

class Dog : public Animal
{
public:
    Dog(std::string name)
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
    Cat(std::string name)
        :Animal(name) 
    {}
    
    void speak() const 
    {
        std::cout << m_name << " Meow" << "\n";
    }
};





int main() 
{
    Animal a("king");
    Cat c("koo");
    Dog d("goo");
    
    a.speak();
    c.speak();
    d.speak();

    Animal *ptr_animal1 = &c;
    Animal *ptr_animal2 = &d;

    ptr_animal1->speak();
    ptr_animal2->speak();

    Cat cats[] = {Cat("cat1"), Cat("cat2")};
    Dog dogs[] = {Dog("dog1"), Dog("dog2")};

    Animal *ptr_array[] = {&cats[0], &cats[1], &dogs[0], &dogs[1]};

    for (int i = 0; i < 4; i++)
        ptr_array[i]->speak();

    return 0;
}