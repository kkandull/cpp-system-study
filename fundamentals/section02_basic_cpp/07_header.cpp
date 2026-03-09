// Section 2 - 1.8
// Focus: operators and namespace
#include <iostream>
#include "dos.h" 
// pragma once(헤더가드) 안하면 multiple definition 에러 발생
#include "add.h" // header 상위폴더 "Myheaders/add.h"

using namespace std;


int main() 
{
    cout << dos(1,2) << endl;
    cout << add(1,2) << endl;
    return 0;
}
