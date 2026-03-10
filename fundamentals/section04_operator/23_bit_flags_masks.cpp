// Section 4 - 3.5 ~ 3.9
// Focus: operators, bitwise
#include <iostream>
#include <bitset>
int main() 
{
    using namespace std;
    
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;

    unsigned char items_flag = 0;

    cout << bitset<8>(items_flag) << endl;

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    // item0 on 
    items_flag |= opt0;
    cout << "item0 obtained: " << bitset<8>(items_flag) << endl;
    
    // item3 on
    items_flag |= opt3;
    cout << "item3 obtained: " << bitset<8>(items_flag) << endl;
    
    // item3 lost
    items_flag &= ~opt3;
    cout << "item3 lost: " << bitset<8>(items_flag) << endl;

    // has item1
    if (items_flag & opt1) {cout << "Has item 1" << endl;}
    else {cout << "Not Has item 1"<< endl;}

    // has item0 
    if (items_flag & opt0) {cout << "Has item 0" << endl;}
    else {cout << "Not Has item 0" << endl;}

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "item2, 3 obtained: " <<  bitset<8>(items_flag) << endl;

    if ((items_flag & opt2) && !(items_flag & opt1))
    {
        // opt2 와 opt1의 상태를 반전 (toggle)
        items_flag ^= (opt2 | opt1);
    }
    cout << bitset<8>(items_flag) << endl;

    // bit masks
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    unsigned int pixel_color = 0xDAA520;
    cout << bitset<32>(pixel_color) << endl;

    unsigned char red = (pixel_color & red_mask) >> 16;
    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char blue = pixel_color & blue_mask;

    cout << "red " << bitset<8>(red) << " " << int(red) <<  endl;
    cout << "green " << bitset<8>(green) << " " << int(green) <<  endl;
    cout << "blue " << bitset<8>(blue) << " " << int(blue) <<  endl;

    return 0;
}