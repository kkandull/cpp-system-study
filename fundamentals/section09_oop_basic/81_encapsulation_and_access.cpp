// Section 8 - 8.1 ~ 8.3
// Focus: encapsulation and access
#include <iostream>

class Date 
{
private: // default
    int m_month;
    int m_day;
    int m_year;

public : 
    void setDate(const int& month_input, const int& day_input,const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    void setMonth(const int& month_input)
    {
         m_month = month_input;
    }

    int getDay() const
    {
        return m_day;
    }

    void copyFrom(const Date& original)
    {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }

};

int main() 
{
    using namespace std;
    
    Date today; 
    today.setDate(3, 29, 2026);
    today.setMonth(10);

    cout << today.getDay() << endl;

    Date copy;
    copy.copyFrom(today);

    return 0;
}