// Section 11 - 11.7 ~ 11.9
// Focus: multi inheritance
#include <iostream>

class Boy
{
private:
    long m_b = 0;
public:
    Boy(long b_id) : m_b(b_id) {}

    void printB()
    {
        std::cout << "I'm Boy" << "\n";
    }

    long getId() const
    {
        return m_b;
    }
};

class Girl
{
private:
    long m_g = 0;
public:
    Girl(long g_id) : m_g(g_id) {}

    void printC()
    {
        std::cout << "I'm Girl" << "\n";
    }

    long getId() const 
    {
        return m_g;
    }

};

class Human : public Boy, public Girl
{
public: 
    Human(long b_id, long g_id)
        : Boy(b_id), Girl(g_id) {}

};

int main() 
{
    Human h(1, 0);

    h.printB();
    h.printC();
    
    // h.getId(); error
    std::cout << h.Boy::getId() << "\n";
    std::cout << h.Girl::getId() << "\n";
    return 0;
}