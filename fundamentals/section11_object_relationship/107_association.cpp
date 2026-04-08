// Section 10 - 10.1 ~ 10.3
// Focus: association
#include "Teacher.h"
#include "Student.h"

int main()
{
    Student s1("Alice");
    Student s2("Bob");
    Student s3("Charlie");

    Teacher t1("Kim");
    Teacher t2("Lee");

    t1.addStudent(&s1);
    t1.addStudent(&s2);

    t2.addStudent(&s2);
    t2.addStudent(&s3);

    std::cout << t1 << "\n";
    std::cout << t2 << "\n";

    return 0;
}