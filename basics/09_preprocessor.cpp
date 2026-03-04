// Section 2 - 1.8 ~ 1.14
// Focus: operators and namespace
#include <iostream>
#include <algorithm>



#define MAX(a,b) ((a>b) ? a : b) // Macro Problem
#define APPLE // 이 파일안에서만 정의됨 
int main()
{
    using namespace std;
    cout << MAX(1+2,3) << endl; 
    // library
    cout << std::max(1+3,2) << endl;

    // 정의가 되있으면 
    #ifdef APPLE
        cout << "Apple" << endl;
    #else
    // 정의가 안되있으면
        cout << "Orange" << endl;
    #endif
    return 0;
}