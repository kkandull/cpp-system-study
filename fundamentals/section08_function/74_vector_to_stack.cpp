// Section 7 - 7.11 ~ 7.13
// Focus: vector and stack
#include <iostream>
#include <vector>

void printStack(const std::vector<int> &stack)
{
    for (const auto& e: stack) 
        std::cout << e << " ";
    std::cout << std::endl; 
}
int main() 
{
    using namespace std;
    
    std::vector<int> v{ 1, 2, 3};

    v.resize(2); // 실제 원소 개수(size) 를 n으로 바꿈
    v.reserve(1024); // 미리 메모리(capacity) 만 확보

    printStack(v);
    // 사이즈 / 용량 
    cout << v.size() << " " << v.capacity() << endl;

    // vector to stack
    std::vector<int> stack;
    stack.push_back(3);
    printStack(stack);
    stack.push_back(5);
    printStack(stack);
    stack.push_back(7);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);

    return 0;
}