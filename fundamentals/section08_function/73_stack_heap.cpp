// Section 7 - 7.7 ~ 7.10
// Focus: stack and heap
#include <iostream>

void initArray()
{
    int *ptr2 = new int[1000];
    // delete [] ptr2; delete[]를 하지 않으면 함수가 끝나도 heap 메모리는 자동 해제되지 않아서 누수가 발생한다
}
int main() 
{   
    using namespace std;
    //int array[1000]; // 매우 큰 지역 배열은 stack overflow 유발 가능
    // stack에 비해 heap이 사이즈 가 큼

    // heap 할당 
    int *ptr = nullptr;
    ptr = new int[10000];
    delete[] ptr;

    ptr = nullptr;

    initArray();

    return 0;
}
/* 
   stack = 지역변수, 함수 끝나면 자동 소멸, 빠름, 크기 제한이 상대적으로 작음 
   heap  =  new로 직접 할당, delete 해야함, 크기를 런타임에 유연하게 잡기 가능, 누수 위험
*/