// Section 9 - 9.1 ~ 9.3
// Focus: overloading
#include <iostream>
#include <fstream>

class Point
{
private:
    double m_x, m_y, m_z;
public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0) 
        : m_x(x), m_y(y), m_z(z)
    {}
    double getX() const { return m_x; }
    double getY() const { return m_y; }
    double getZ() const { return m_z; }
    
    friend std::ostream& operator << (std::ostream& out, const Point &point)
    {
        out << point.m_x << " " << point.m_y << " " << point.m_z;
        return out;
    }

    friend std::istream& operator >> (std::istream& in, Point &point)
    {
        in >> point.m_x >> point.m_y >> point.m_z;
        return in;
    }
};


int main() 
{
    std::ifstream uf("out.txt");
    std::ofstream of("out.txt");

    Point p1, p2;
    std::cin >> p1 >> p2;
    uf >> p1 >> p2;
    of << p1 << " " << p2 << "\n";
    std::cout << p1 << " " << p2 << "\n";
    of.close();
    return 0;
}