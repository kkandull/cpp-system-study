// Section 5 - 5.7 ~ 5.10
// Focus: for and break and continue
#include <iostream>
using namespace std;

void breakOrReturn()
{
    while(true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            break;
        if (ch == 'r')
            return;
    }
    cout << "Hello" << endl; // break시 실행
}

int main() 
{
    breakOrReturn();
    
    for ( int i = 0; i < 10; i++) 
    {
        if ( i % 2 == 0) continue;
        cout << i << endl;
    }

    int count(0);
    while(true)
    {
        char chs;
        cin >> chs;

        cout << chs << " " << count << endl;
        if (chs == 'x')
            break;
        ++count;
    }
   
    return 0;
}