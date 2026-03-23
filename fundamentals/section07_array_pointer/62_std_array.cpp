// Section 6 - 6.20 ~ 6.21
// Focus: array and vector
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
    cout << my_arr.size() << endl;
}

int main() 
{
    // std::array는 고정 크기 배열이지만 size()를 알 수 있고,
    // 일반 배열보다 STL 알고리즘과 함께 쓰기 편하다.
    std::array<int, 5> my_arr = { 1, 21 ,3 , 40, 5};
    //my_arr = {0, 1, 2, 3, 4};
    //my_arr = {0, 1, 2, 3};

    // cout << my_arr[10] << endl; 범위 검사 안 함
    // cout << my_arr.at(10) << endl; 범위 검사 함, 예외 발생 가능

    for ( auto& element : my_arr)
        cout << element << " ";
    cout << endl;

    // sort reverse = false
    std::sort(my_arr.begin(), my_arr.end());

    for ( auto& element : my_arr)
        cout << element << " ";
    cout << endl;

    // sort reverse = true
    std::sort(my_arr.rbegin(), my_arr.rend());

    for ( auto& element : my_arr)
        cout << element << " ";
    cout << endl;
     
    cout << my_arr.size() << endl;
    printLength(my_arr);

    cout << my_arr.front() << endl;
    cout << my_arr.back() << endl;
    return 0;
}