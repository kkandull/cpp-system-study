// Section 8 - 8.11 ~ 8.15
// Focus: nested_types
#include <iostream>

class Fruit
{
public: 
    enum class FruitType 
    {
        APPLE, BANANA, CHERRY,
    };

    class InnerClass{};

    struct InnerStruct{};

private:
    FruitType m_type;
public:
    Fruit(FruitType type) : m_type(type)
    {}

    FruitType getType() const { return m_type; }
};


int main() 
{
    Fruit apple(Fruit::FruitType::APPLE);
    if ( apple.getType() == Fruit::FruitType::APPLE)
        std::cout << "Apple" << "\n";
    
    return 0;
}