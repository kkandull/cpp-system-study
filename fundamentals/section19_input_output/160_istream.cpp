// Section 18 - 18.1 ~ 18.3
// Focus: istream
#include <iostream>
#include <iomanip> 
#include <string>

int main() 
{
    char buf[5];
    // 5개 초과로 입력하면 5개씩 받아서 출력 
    /*
    std::cin >> std::setw(5) >> buf;
    std::cout << buf << "\n";

    std::cin >> std::setw(5) >> buf;
    std::cout << buf << "\n";

    std::cin >> std::setw(5) >> buf;
    std::cout << buf << "\n";
    */

    /*
    std::cin.get(buf, 5); // Hello world -> Hell "\0" 문자열 제외 4글자

    std::cout << std::cin.gcount() << " " <<  buf << "\n";

    std::cin.getline(buf, 5);
    std::cout << std::cin.gcount() << " " <<  buf << "\n";

    std::cin.getline(buf, 5); // 위에서 getline으로 한줄 다 읽어버려서 읽을게 없음
    std::cout << std::cin.gcount() << " " <<  buf << "\n"; 
    
    std::string buf2;
    std::getline(std::cin, buf2);
    std::cout << std::cin.gcount() << " " <<  buf << "\n"; 
    */

    char bufs[1024];

    std::cin.ignore(); // 첫번째 부터 글자 수 만큼 무시

    std::cout << static_cast<char>(std::cin.peek()) << "\n"; // 읽어오기만 함

    std::cin >> std::setw(sizeof(bufs)) >> bufs;
    std::cout << bufs << "\n";

    std::cin.unget(); // 마지막 글자 가져옴
    std::cin.putback('A'); // 원하는 글자 넣음
    std::cin >> bufs;
    std::cout << bufs << "\n";
    return 0;
}