// Section 8 - 8.1 ~ 8.3
// Focus: constructors
#include <iostream>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // Fraction() {}
    Fraction(const int& num_in = 1, const int& den_in = 1) 
    {
        m_numerator = num_in;
        m_denominator = den_in;
    }
    void print() const
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

class Second
{
public:
    Second()
    {
        cout << "Class second constructor()" << endl;
    }
};
class First
{
    Second sec;
public:
    First()
    {
        cout << "Class first constructor()" << endl;
    }
};


int main() 
{
    //Fraction frac; // frac() 와 구분
    //frac.print();
    Fraction one_third(1, 3);
    one_third.print();
    Fraction one_one(1);
    one_one.print();

    // 파라미터가 둘다 없을때는 괄호 없이
    Fraction deone_one;
    deone_one.print();

    Fraction five_one{5, 1}; // 타입 변환 허용 안함 
    five_one.print();
    Fraction fivedot_one(5.0, 1);
    fivedot_one.print();
    
    First fir;
    return 0;
}