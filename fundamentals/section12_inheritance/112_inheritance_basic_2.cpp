// Section 11 - 11.1 ~ 11.3
// Focus: inheritance
#include "Student.h"
#include "Teacher.h"

int main() 
{
    Student std("Jack");
    std.setName("kkad");
    std::cout << std.getName() << "\n";

    Teacher teacher1("Dr, W");
    teacher1.setName("Dr, J");
    std::cout << teacher1.getName() << "\n";
    
    std::cout << std << "\n";
    std::cout << teacher1 << "\n";

    std.doNothing();
    teacher1.doNothing();

    std.Study();
    teacher1.Teach();
    
    // 자식 클래스에 구현된걸 부모 클래스에서 사용 못함
    Person per;
    per.getName();
    // per.Study(); 불가능
    return 0;
}