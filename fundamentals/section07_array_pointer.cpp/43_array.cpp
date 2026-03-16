// Section 6 - 6.1 ~ 6.3
// Focus: array and loop
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

enum StudentName
{
    JACKJACK,
    DASH,
    NUM_STUDENT,
};

void doSomething(int student_scores[]) // 배열 매개변수는 함수 선언에서 포인터로 decay된다
{
    cout << &student_scores << endl;
    cout << &student_scores[0] << endl;
    cout << student_scores[0] << endl;
    cout << student_scores[1] << endl;
    cout << student_scores[2] << endl;
    cout << "Size in doSomething (pointer size) " << sizeof(student_scores) << endl;
}
int main() 
{    
    int one_student_scores; // 1 variable
    int student_scores[5]; // 5 int 

    cout << sizeof(one_student_scores) << endl; // 4
    cout << sizeof(student_scores) << endl; // 20

    one_student_scores = 100;

    student_scores[0] = 100; // 1st element
    student_scores[1] = 80; // 2nd element
    student_scores[2] = 90; // 3rd element
    student_scores[3] = 40; // 4th element
    student_scores[4] = 50; // 5th element
    // student_scores[5] = 0;


    for (int i = 0; i < 5; i++)
    {
        cout << student_scores[i] << endl;
    }

    cout << sizeof(Rectangle) << endl;
    Rectangle rect_arr[10];

    cout << sizeof(rect_arr) << endl;

    rect_arr[0].length = 1;
    rect_arr[0].width = 1;

    int my_arr[] {1, 2, 3, 4, 5};
    cout << my_arr[JACKJACK] << endl;
    cout << my_arr[DASH] << endl;
    cout << my_arr[2] << endl;
    
    int std_scores[NUM_STUDENT];
    std_scores[JACKJACK] = 100;
    std_scores[DASH] = 40;

    int num_std = 0;
    cin >> num_std;
    //int std_sc[num_std]; 불가 컴파일 타임에 사이즈 정해져있어야함

    const int num_st = 20;
    int std_sc[num_st];

    cout << (int)&std_sc << endl;
    cout << (int)&(std_sc[0]) << endl;
    cout << (int)&(std_sc[1]) << endl;
    cout << (int)&(std_sc[2]) << endl;


    int std_score[num_st] = {1, 2, 3, 4, 5, };
    cout << std_score << endl; // 주소 연산자 안붙여도 됨
    cout << &std_score << endl;
    cout << std_score[0] << endl;
    cout << std_score[1] << endl;
    cout << std_score[2] << endl;
    cout << "Size in main " << sizeof(std_score) << endl;

    doSomething(std_score);

    return 0;
}