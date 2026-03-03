// Section 2 - 1.1 ~ 1.7
// Focus: program structure and scope fundamentals
#include <iostream>
#include <cstdio>

int main()
{
    // out 
    using namespace std; // std::cout -> cout 
    int x = 1024;
    cout << "I love this lecture!" << endl; 
    cout << "X is" << x << endl;

    cout << "abc" << "\t" << "def" << endl; // 줄 맞춤 
    cout << "ab" << "\t" << "cdef" << endl;
    
    // in
    int y = 1;
    cout << "befor num is " << y << endl;

    cin >> y;
    
    cout << "your input is " << y << endl;
    

    return 0; 
}