// Section 15 - 15.5 ~ 15.7
// Focus: std::weak_ptr
#include <iostream>
#include <string>
#include <memory>

class Person
{
private:
    std::string m_name;
    // std::shared_ptr<Person> m_partner;
    std::weak_ptr<Person> m_partner;
public:
    Person(const std::string &name) : m_name(name) 
    {
        std::cout << m_name << " creadted\n";
    }
    ~Person()
    {
        std::cout << m_name << " destroyed\n";
    }

    friend bool partnerUp(std::shared_ptr<Person> &p1, std::shared_ptr<Person> &p2)
    {
        if(!p1 || !p2) 
            return false;

        p1->m_partner = p2;
        p2->m_partner = p1;

        std::cout << p1->m_name << " is partnered with " << p2->m_name << "\n";

        return true;
    }

    const std::shared_ptr<Person> getPartner() const 
    {
        return m_partner.lock();
    }

    const std::string getName() const 
    {
        return m_name;
    }
};


int main() 
{
    auto lucy = std::make_shared<Person>("Lucy");
    auto john = std::make_shared<Person>("John");

    partnerUp(lucy, john);
    
    if (auto partner = lucy->getPartner()) 
    { // lock()이 성공해서 유효한 포인터가 들어왔는지 검사
        std::cout << partner->getName() << "\n";
    } 
    else 
    {
        std::cout << "파트너가 이미 떠났습니다.\n";
    }
    return 0;
}