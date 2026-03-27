// Section 7 - 7.14 ~ 7.16
// Focus: command line
#include <iostream>
#include <string>
int main(int argc, char *argv[]) 
{
    using namespace std;
    
    for (int i = 0;  i < argc; ++i)
    {
        std::string argv_single = argv[i];
        if (argc > 1)
        {   
            // 첫 번째 사용자 인자를 정수로 처리
            int num = std::stoi(argv[1]);
            cout << num+1 << endl;
        }
        else 
            cout << argv_single << endl;
    }

    return 0;
}