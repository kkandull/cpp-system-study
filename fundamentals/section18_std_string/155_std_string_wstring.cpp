// Section 17 - 17.1 ~ 17.2
// Focus: string
#include <iostream>
#include <string>
#include <locale>
#include <cstddef>
#include <io.h>    
#include <fcntl.h>

int main() 
{
    std::string string;
    std::wstring wstring;

    wchar_t wc; // wide_character/unicode

    const std::wstring texts[] = 
    {
        L"안녕하세요", // korean

        L"Ñá", //Spanish

        L"forêt intérêt",  //French

        L"Gesäß",  //German

        L"取消波蘇日奇諾",  //Chinesse

        L"日本人のビット",  //Japanese

        L"немного русский",  //Russian

        L"ένα κομμάτι της ελληνικής",  //Greek

        L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ",  //Punjabi

        L"کمی از ایران ", //Persian

        L"కానీ ఈ ఏమి నరకం ఉంది?", //Telugu

        L"Но какво, по дяволите, е това?", //Bulgarian
    };
    
    #ifdef _WIN32
    _setmode(_fileno(stdout), _O_U16TEXT);
    #else
    try {
        std::locale::global(std::locale("")); 
    } catch (const std::exception& e) {
    std::cerr << "Locale error: " << e.what() << '\n';
    }
    #endif

    for ( size_t i = 0; i < 12; ++i )
        std::wcout << texts[i] << "\n";
    return 0;
}