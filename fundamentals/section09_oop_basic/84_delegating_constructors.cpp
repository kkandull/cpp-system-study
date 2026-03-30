// Section 8 - 8.4 ~ 8.6
// Focus: delegating constructors
#include <iostream>
#include <string>

using namespace std;

class Student 
{
private: 
    int m_id;
    string m_name;

public: 
    // 위임 생성자
    Student (const string& n_in)
        : Student(0, n_in)
    {}

    Student(int id_in, const string& n_in)
        : m_id(id_in), m_name(n_in)
    {}

    void print() const
    {
        cout << m_id << " " << m_name << endl;
    }        
};

int main() 
{
    Student st1(0, "Jack");
    st1.print();
    Student st2("Kim");
    st2.print();

    return 0;
}