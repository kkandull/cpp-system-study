// Section 16 - 16.1 ~ 16.3
// Focus: STL
#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <functional>

void sequence_containers()
{
    // vector 
    {
        std::vector<int> vec; // #include <vector>
        for (int i = 0; i < 10; i++)
            vec.push_back(i);

        for (auto & ele : vec)
            std::cout << ele << " ";
        std::cout << "\n";
    }

    // deque 
    {
        std::deque<int> deq; // #include <deque>
        for (int i = 0; i < 10; i++)
        {
            deq.push_back(i);
            deq.push_front(i);
        }

        for (auto & ele : deq)
            std::cout << ele << " ";
        std::cout << "\n";
    }
}

void associative_containers()
{
    // set
    {
        std::set<std::string> str_set;

        str_set.insert("Hello");
        str_set.insert("World");
        str_set.insert("Hello");

        std::cout << str_set.size() << "\n";

        for (auto & ele : str_set) 
            std::cout << ele << " ";
        std::cout << "\n";
    }

    // multiset
    {
        std::multiset<std::string> str_set;
        str_set.insert("Hello");
        str_set.insert("World");
        str_set.insert("Hello");

        std::cout << str_set.size() << "\n";

        for (auto & ele : str_set) 
            std::cout << ele << " ";
        std::cout << "\n";
    }

    // map : key/value
    {
        std::map<char, int> map;
        map['a'] = 10;
        map['b'] = 20;
        map['c'] = 30;

        std::cout << map['a'] << "\n";

        map['a'] = 100;

        std::cout << map['a'] << "\n";

        for (auto & ele : map)
            std::cout << ele.first << " " << ele.second << " ";
        std::cout << "\n";
    }

    // multimap : duplicated keys
    {
        std::multimap<char, int> map;
        map.insert(std::pair('a', 10));
        map.insert(std::pair('b', 20));
        map.insert(std::pair('a', 1));
        map.insert(std::pair('d', 40));

        std::cout << map.count('a') << "\n";

        for (auto & ele : map)
            std::cout << ele.first << " " << ele.second << " ";
        std::cout << "\n";
    }
}

void container_adapters()
{
    // stack
    {
        std::cout << "Stack" << "\n";
        
        std::stack<int> stack;
        stack.push(1); // push adds a copy
        stack.emplace(2); // emplace constructors a new object 
        stack.emplace(3);
        std::cout << stack.top() << "\n";
        stack.pop();
        std::cout << stack.top() << "\n";
    }

    // queue 
    {
        std::cout << "Queue" << "\n";

        std::queue<int> queue;
        queue.push(1);
        queue.push(2);
        queue.push(3);
        std::cout << queue.front() << " " << queue.back() << "\n";
        queue.pop();
        std::cout << queue.front() << " " << queue.back() << "\n";
    }

    // priority queue
    {
        std::cout << "Priority queue" << "\n";

        std::priority_queue<int> queue;

        // max
        for(const int n : {3, 8, 9, 2, 6, 7, 1})
            queue.push(n);
        
        for (int i = 0; i < 7; i++)
        {
            std::cout << queue.top() << "\n";
            queue.pop();
        }

        std::cout << "\n";

        // min
        std::priority_queue<int, std::vector<int>, std::greater<int>> min_queue;
        for(const int n : {3, 8, 9, 2, 6, 7, 1})
            min_queue.push(n);
            
        for (int i = 0; i < 7; i++)
        {
            std::cout << min_queue.top() << "\n";
            min_queue.pop();
        }
        
    }
}
int main() 
{
    sequence_containers();

    associative_containers();

    container_adapters();

    return 0;
}