// Section 8 - 8.1 ~ 8.3
// Focus: oop and class
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// object ( data, print())
class Friend
{
public: // access specifier (public, private, protected)
    string m_name;
    string m_address;
    int m_age;
    double m_weight;
    double m_height; 

    void print() const
    {
        cout << m_name << " " << m_address << " " << m_age << " " << m_weight << " " << m_height << endl;
    }
};
// struct는 function 잘 안넣음 
int main() 
{
    Friend jj{"Jack", "downtown", 20, 100.0, 200.0}; // instanciation, instance
    jj.print();
    
    vector<Friend> my_friends;
    my_friends.resize(2);

    for(auto& ele : my_friends) 
        ele.print();
    
    return 0;
}