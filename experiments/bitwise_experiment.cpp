#include <iostream>
#include <bitset>

int main() 
{
    using namespace std;
    // constexpr
    unsigned char option_viewed  =  1 << 0;
    unsigned char option_edited  =  1 << 1;
    unsigned char option_liked   =  1 << 2;
    unsigned char option_shared  =  1 << 3;
    unsigned char option_deleted =  1 << 7;

    unsigned char my_article_flags = 0;
    cout << "초기 상태: " << bitset<8>(my_article_flags) << endl;

    // 기사를 봤을 때 
    my_article_flags |= option_viewed;
    cout << "기사를 봤을 때: " << bitset<8>(my_article_flags) << endl;

    // 기사의 좋아요를 클릭했을 때 
    my_article_flags |= option_liked;
    cout << "기사의 좋아요를 클릭했을 때: " << bitset<8>(my_article_flags) << endl;

    // 기사의 좋아요를 다시 클릭했을 때
    my_article_flags ^= option_liked; // liked flag toggle
    cout << "기사의 좋아요를 다시 클릭했을때: " << bitset<8>(my_article_flags) << endl;

    // 본 기사만 삭제할때 
    if (my_article_flags & option_viewed) 
    {
        my_article_flags |= option_deleted;
         cout << "본 기사만 삭제할때: " << bitset<8>(my_article_flags) << endl;
    }

    // De Morgan's law
    unsigned char op4 = 0b1100;
    unsigned char op5 = 0b1010;

    unsigned char myflags1 = 0xFF;
    unsigned char myflags2 = 0xFF;
    
    myflags1 &= ~(op4 | op5);
    cout << "myflags1 " << bitset<8>(myflags1) << endl;
    myflags2 &= ~op4 & ~op5;
    cout << "myflags2 " << bitset<8>(myflags2) << endl;
    return 0;
}