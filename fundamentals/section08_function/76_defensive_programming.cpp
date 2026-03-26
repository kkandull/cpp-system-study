// Section 7 - 7.11 ~ 7.13
// Focus: defensive programming
#include <iostream>

int main() 
{
    using namespace std;
    
    // syntax error
    // int x

    // semantic error example: condition says >= 5 but message says greater than 5

    int x;
    cin >> x;
    if(x >= 5) // x > 5
        cout << "x is greater than 5" << endl;

    // violated assumption
    while(true)
    {
        string hello = "Hello, my name is Jun Yeong";

        cout << "Input from 0 to " << hello.size() - 1 << endl;
        int ix;
        if (!(cin >> ix))
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Invalid input" << endl;
            continue;
        }
        
        if (ix >= 0 && ix <= hello.size() -1) 
        {
            cout << hello[ix] << endl; 
            break;
        }
        else 
            cout << "Please try again" << endl;
    }
    return 0;
}