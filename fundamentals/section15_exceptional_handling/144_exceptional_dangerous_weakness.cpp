// Section 14 - 14.4 ~ 14.6
// Focus: exception dangerous and weakness
#include <iostream>

class A
{
public:
    // 실무에서의 올바른 소멸자 처리 (절대 밖으로 던지지 않음)
    ~A()
    try {
        // 위험한 작업
    } catch(...) {
        // 로그만 남기고 조용히 넘어감
    }
};

int main() 
{
    try
    {   int *i = new int[10000];
        throw "error";
        // std::unique_ptr<int> uq_ptr(i);
        delete[] i; // 메모리 leak 가능성 해제 안됨
        A; // 소멸자에서 예외처리를 던지면 안됨
    }
    catch(...)
    {
        std::cerr << "catch" << '\n';
    }
    
    
    return 0;
}