// Section 6 - 6.14 ~ 6.17
// Focus: refernce and for-each
#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

int main() 
{
    using namespace std;
    
    vector<int> numbers = { 0, 1, 10, 2, 3, 5, 80, 103, 21, 34, 505, 89};
    // range-based for는 배열이나 vector처럼 순회 가능한 범위에서 사용 가능하다
    // raw pointer만으로는 바로 사용할 수 없다

    // change array
    for (auto &number : numbers) // auto number 로 받으면 복사본이므로 원본이 바뀌지 않는다
        number += 10;

    // output
    for(const auto &number : numbers)
        cout << number << " ";
    cout << endl;

    int max_number = std::numeric_limits<int>::lowest();

    for (const auto &n : numbers)
        max_number = std::max(max_number, n);
    
    cout << max_number << endl;
    return 0;
}