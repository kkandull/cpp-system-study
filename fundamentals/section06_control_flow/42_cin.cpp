// Section 5 - 5.7 ~ 5.10
// Focus: for and break and continue
#include <iostream>

using namespace std;
    
int getInt()
{   
    while (true)
    {
        cout << "Enter an integer number : ";
        int x;
        cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            cout << "Invalid number please" << endl;
        }
        else 
        {
            std::cin.ignore(32767, '\n');
            return x;
        }
    }

}

char getOperator() 
{
    while(true)
    {
        cout << "Enter an operator(+ - * /) : ";
        char op;
        cin >> op;
        std::cin.ignore(32767, '\n');

        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else 
            cout << "Invalid operator, please try again";
    }
}

void printResult(int x, int y, char op)
{
    if(op == '+') cout << x + y << endl;
    else if(op == '-') cout << x - y << endl;
    else if(op == '*') cout << x * y << endl;
    else if(op == '/') 
    {
        if (y == 0) 
            cout << "Division by zero is not allow\n";
        else 
            cout << x / y << endl;
    }
    else 
    {
        cout << "Invalid operator" << endl;
    }
}

int main() 
{
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    printResult(x, y, op);

    return 0;
}