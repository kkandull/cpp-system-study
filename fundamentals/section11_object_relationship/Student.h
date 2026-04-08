#pragma once
#include <iostream>
#include <string>

class Student
{
private:
    std::string m_name;

public:
    Student(const std::string& name_in)
        : m_name(name_in)
    {
    }

    const std::string& getName() const
    {
        return m_name;
    }

    friend std::ostream& operator<<(std::ostream& out, const Student& student)
    {
        out << student.m_name;
        return out;
    }
};