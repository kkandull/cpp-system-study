// Section 18 - 18.1 ~ 18.3
// Focus: ostream
#include <iostream>
#include <iomanip>
int main() 
{
    std::ios_base::fmtflags orig_flags = std::cout.flags(); // 현재 상태 저장
    std::cout.setf(std::ios::showpos);
    std::cout << 108 << "\n";

    std::cout.unsetf(std::ios::showpos);
    std::cout << 109 << "\n";

    std::cout << std::hex << std::uppercase;
    std::cout << 110 << "\n";
    std::cout << 111 << "\n";

    std::cout.flags(orig_flags); // 복구

    std::cout << std::dec;
    std::cout << 110 << "\n";

    std::cout << std::boolalpha;
    std::cout << true << " " << false << "\n";

    std::cout << std::defaultfloat;
    std::cout << std::setprecision(3) << 123.456 << "\n"; // 123
    std::cout << std::setprecision(4) << 123.456 << "\n";
    std::cout << std::setprecision(5) << 123.456 << "\n";

    std::cout << std::fixed; // 소수점 자릿수 고정
    std::cout << std::setprecision(6) << 123.456 << "\n";
    std::cout << std::setprecision(7) << 123.456 << "\n";

    std::cout << std::scientific;
    std::cout << std::setprecision(6) << 123.456 << "\n"; // 1.234560E+02
    std::cout << std::setprecision(7) << 123.456 << "\n"; // 1.2345600E+02

    std::cout << std::defaultfloat << std::showpoint;
    std::cout << std::setprecision(3) << 123.456 << "\n"; // 123.

    std::cout << -12345 << "\n";
    std::cout.fill('*');
    std::cout << std::setw(10) << -12345 << "\n";
    std::cout << std::setw(10) << std::left << -12345 << "\n";
    std::cout << std::setw(10) << std::right << -12345 << "\n";
    std::cout << std::setw(10) << std::internal << -12345 << "\n"; // 부호와 숫자사이

    return 0;
}