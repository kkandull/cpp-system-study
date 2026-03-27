// Section 7 - 7.14 ~ 7.16
// Focus: ellipsis
#include <iostream>
#include <cstdarg> // for ellipsis

double findAverage(int count, ...) // count 개수만큼의 argument의 평균을 내줌 
{
    double sum = 0;
    va_list list;
    va_start(list, count);

    for (int arg = 0; arg < count; ++arg)
    {
        sum += va_arg(list, int); // 다음 인자를 int라고 가정하고 읽는다
    }
    va_end(list);

    if (count <= 0)
        return 0.0;
    return sum / count;
}

int main() 
{
    using namespace std;
    
    // dangerous examples:
    // cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
    // cout << findAverage(10, 1, 1, 2, 3) << endl; 
    cout << findAverage(3, 1, 2, 3) << endl;
    cout << findAverage(5, 1, 2, 3, 4, 3) << endl;

    return 0;
}