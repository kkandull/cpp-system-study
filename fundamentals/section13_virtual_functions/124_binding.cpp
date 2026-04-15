// Section 12 - 12.4 ~ 12.7
// Focus: binding
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int main() 
{
    int x, y;
    std::cin >> x >> y;
    int op;
    std::cout << "0 : add, 1 : sub, 2 : mul" << "\n";
    while (true)
    {
        std::cin >> op;

        if (std::cin.fail()) 
        {
            std::cin.clear(); 
            std::cin.ignore(32767, '\n'); 
            std::cout << "please input number" << "\n";
            continue;
        }

        if (op >= 0 && op <=2)
            break;
        std::cin.clear(); 
        std::cin.ignore(32767, '\n');
        std::cout << "retry please" << "\n";
    }
        
    // dynamic binding
    int(*func_ptr)(int, int) = nullptr;

    switch(op)
    {
        case 0 : func_ptr = add; break;
        case 1 : func_ptr = sub; break;
        case 2 : func_ptr = mul; break;
    }
    if (func_ptr != nullptr)
        std::cout << func_ptr(x,y) << "\n";
    else   
        std::cout << "잘못된 연산자 입력임" << "\n";

    return 0;
}