// Section 6 - 6.18 ~ 6.19
// Focus: pointers
#include <iostream>

int main() 
{
    using namespace std;
    
    int *ptr = nullptr;
    int **ptrptr = nullptr;

    int value = 5;

    ptr = &value;
    ptrptr = &ptr;

    cout << ptr << " " << *ptr << " " << &ptr << endl;
    cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    cout << **ptrptr << endl;

    const int row = 3;
    const int col = 5;

    const int seda[row][col] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };


    // int **matrix = new int*[row];
    /*int *r1 = new int[col] {1, 2, 3, 4, 5};
    int *r2 = new int[col] {6, 7, 8, 9, 10};
    int *r3 = new int[col] {11, 12, 13, 14, 15};*/

    for (int r = 0; r < row; ++r)
    {
        // matrix[r] = new int[col];
    }

    int *matrix1D = new int[row*col];

    for(int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
        {
            // matrix[r][c] = seda[r][c];
            // 2차원 좌표 (r, c)를 1차원 인덱스로 변환: r * col + c
            matrix1D[r*col + c] = seda[r][c];
        }
    }  

    for(int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
        {
            // cout << matrix[r][c] << " ";
            cout << matrix1D[r*col + c] << " ";
        }
        cout << endl;
    }

    // delete
    /*for (int r = 0; r < row; ++r)
    {
        delete[] matrix[r];
    }*/
    delete[] matrix1D;

    return 0;
}