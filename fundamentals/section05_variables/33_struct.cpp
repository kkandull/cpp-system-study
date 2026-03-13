// Section 5 - 4.7 ~ 4.10
// Focus: enum and struct
#include <iostream>
#include <string>


struct Person
{
    // member
    // default 값 선언 가능 
    double height;
    float weight;
    int age;
    std::string name;

    void print()
    {
        std::cout << height << " " << weight << " " << age << " " << name << std::endl;
    }

};

struct Family
{
    Person me, mom, dad;
};

/*void printPerson(Person ps)
{
    cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << endl;
}*/

Person getMe()
{
    Person me {2.0, 100.0, 20, "Lola"};
    
    return me;
}

struct Employee // 2+ (2) + 4 + 8 = 16 // 정렬 때문에 중간에 Padding 들어가 전체 크기가 커질 수 있음
{
    short id; // 2bytes
    int age;  // 4bytes
    double wage; // 8bytes
};

int main() 
{
    Person me {2.0, 100.0, 20, "Lola"}; // 직접 기본값을 지정하지 않으면 멤버는 초기화되지 않을 수 있다
    // printPerson(me);
    me.print();

    Person me_from_func = getMe();
    me_from_func.print();

    Person me2(me);
    me2.print();
    Person me3;
    me3 = me;
    me3.print();
    
    std::cout << sizeof(Employee) << std::endl; // 16

    return 0;
}