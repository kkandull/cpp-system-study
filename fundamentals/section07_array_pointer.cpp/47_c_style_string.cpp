// Section 6 - 6.4 ~ 6.7
// Focus: array and pointer
#include <iostream>
#include <cstring>

int main() 
{
    using namespace std;
    
    char myString[] = "string";

    for (int i = 0; i < 7; i++)
    {
        // 마지막에 null 들어가 있음 
        cout << myString[i] << endl;
    }

    char myStr[255];
    //cin >> myStr;
    cin.getline(myStr, 255);
    //myStr[4] = '\0'; null 전까지 출력함
    cout << myStr << endl;

    char source[] = "Copy this!";
    char dest[50]; // 메모리 부족하면 문제 발생 위험
    //strcpy_s(dest, 5, source);
    strcpy(dest, source); // dest 크기가 충분할 때만 안전
    //strcat(dest, source);
    cout << source <<" | " << dest << endl;
    //strcmp() 같으면 0 다르면 음수 또는 양수
    cout << strcmp(source, dest) << endl;
    

    return 0;
}