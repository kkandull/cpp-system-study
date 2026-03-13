// Section 5 - 4.7 ~ 4.10
// Focus: enum and struct
#include <iostream>

int main() 
{
    using namespace std;
    
    enum class Color 
    {
        RED,
        BLUE
    };

    enum class Fruit 
    {
        BANANA,
        APPLE
    };

    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;

    Color color1 = Color::BLUE;
    Color color2 = Color::BLUE;

    if (color1 == color2)
        cout << "Same Color " << endl;
    // if ( color == fruit ) // 비교 불가
    
    // int x = Color::RED; 불가
    int x = static_cast<int>(Color::RED);

    return 0;
}