// Section 6 - 6.14 ~ 6.17
// Focus: refernce and for-each
#include <iostream>

struct Person
{
    int age;
    double weight;
};

int main() 
{
    using namespace std;
    
    Person person;

    person.age = 5;
    person.weight = 30;

    Person &ref = person;
    ref.age = 10;
    ref.weight = 100;

    Person *ptr = &person;
    ptr->age = 30; // (*ptr).age = 20;

    Person &ref2 = *ptr;
    ref2.age = 45;

    cout << &person << endl;
    cout << &ref2 << endl;
    cout << person.age << " " << person.weight << endl;
    return 0;
}