// Section 6 - 6.20 ~ 6.21
// Focus: array and vector
#include <iostream>
#include <vector>

int main() 
{
    using namespace std;
    
    // vector는 런타임에 크기를 바꿀 수 있는 동적 배열이다
    std::vector<int> vec1 = { 1, 2, 3, 4, 5 };
    cout << vec1.size() << endl;

    std::vector<int> vec2 { 1, 2, 3,};
    cout << vec2.size() << endl;

    vec1.resize(2); // 크기를 2로 줄이면 뒤 원소들은 제거된다

    cout << vec1.size() << endl;
    for(auto& items : vec1) 
        cout << items << " ";
    cout << endl;

    vec1.resize(7); // 뒤에 0으로 채워짐

    cout << vec1.size() << endl;
    for(auto& items : vec1) 
        cout << items << " ";
    cout << endl;

    cout << vec1[1] << endl;
    cout << vec1.at(1) << endl;

    vec2.push_back(100); // 뒤에 넣음
    cout << vec1.size() << endl;
    for(auto& items : vec2) 
        cout << items << " ";
    cout << endl;

    vec2.pop_back(); // 맨 뒤 원소 제거
    cout << vec1.size() << endl;
    for(auto& items : vec2) 
        cout << items << " ";
    cout << endl;

    return 0;
}