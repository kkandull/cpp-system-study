// Section 5 - 4.7 ~ 4.10
// Focus: enum and struct
#include <iostream>
#include <typeinfo>
#include <string>
enum Color // user-defined data types 
{
    COLOR_BLACK, // 수동 할당 가능
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    BLUE
};

enum Feeling 
{
    JOY,
    TIRED,
    // 일반 enum의 enumerator 이름은 같은 scope에 그대로 노출되기 때문에 충돌한다
};
int main() 
{
    using namespace std;
    
    Color paint = COLOR_BLACK;
    Color house( COLOR_GREEN);
    Color apple { COLOR_RED};

    cout << paint << endl;
    cout << house << endl;

    int color = COLOR_BLACK;
    cout << color << endl;

    // Color my_color = color; 불가
    Color my_color = static_cast<Color>(3); // 문법적으로는 가능하지만, 유효하지 않은 값이 들어갈 수 있으므로 조심해야 한다
    cout << my_color << endl;

    // cin >> my_color; 직접 입력 불가
    
    int number;
    cin >> number;
    if ( number == 0) my_color = COLOR_BLACK;

    string str_input;

    std::getline(cin, str_input);
    if (str_input == "COLOR_BLACK") // 권장되지 않음 
    {
        my_color = COLOR_BLACK;
    }
    return 0;
}