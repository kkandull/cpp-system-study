// Section 4 - 3.1 ~ 3.4
// Focus: operators
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 4 / 2 * 3; // left to right 
    cout << x << endl;
    
    int y = std::pow(2,3); // pow double 기반 함수
    cout << y << endl;

    int z = 1;
    int k = -z;

    int l = 10;
    int j = 3;

    cout << l / j << " " << l % j << endl;

    // 하나만 float여도 결과값 float 출력 
    cout << float(l) / j << endl;
    cout << l / float(j) << endl;
    cout << float(l) / float(j) << endl;

    cout << -5 / 2 << " " << -5 % 2 << endl; // 정수 나눗셈 소수 부분 버림

    int q = l;
    q += j; // q = q + j;

    return 0;
}