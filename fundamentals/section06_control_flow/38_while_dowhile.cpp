// Section 5 - 5.1 ~ 5.6
// Focus: if and while
#include <iostream>

int main() 
{
    using namespace std;
    
    int count = 0;
    while (true) 
    {
        cout << count << endl;
        count++;

        if (count == 10) break;
    }

    // overflow
    /*
    unsigned int count = 10; // 조금 빠를 수 있음 int에 비해
    while (count >= 0)
    {
        if ( count == 0 ) cout << "zero";
        else cout << count << " ";

        count--;
    }
    */

    int outer_count = 1;
    while (outer_count <= 5) {
        int inner_count = 1;
        while (inner_count <= outer_count) 
        {
            cout << inner_count << " ";
            inner_count++;
        }
        cout << endl;
        outer_count++;
    }

    // do-while
    int selection; 
    do
    {
        cout << "1. add" << endl;
        cout << "2. sub" << endl;
        cin >> selection;
    } while (selection <= 0 || selection >= 3);

    cout << "Your selected " << selection << endl;
    
    return 0;
}