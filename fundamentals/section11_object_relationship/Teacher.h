#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

class Teacher
{
private:
    std::string m_name;
    std::vector<Student*> m_students;

public:
    Teacher(const std::string& name_in)
        : m_name(name_in)
    {
    }

    void addStudent(Student* student)
    {
        m_students.push_back(student);
    }

    friend std::ostream& operator<<(std::ostream& out, const Teacher& teacher)
    {
        out << teacher.m_name << "'s students : ";

        for (const auto& student : teacher.m_students)
            out << *student << " ";

        return out;
    }
};