// Section 6 - 6.4 ~ 6.7
// Focus: array and pointer
#include <iostream>

int main() 
{
    using namespace std;

    const int num_rows = 3;
    const int num_columns = 5;

    for (int row = 0; row < num_rows; row++ )
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout <<'[' << row << ']' << '[' << col << ']' << '\t';
        }
        cout << endl;
    }

    int array[num_rows][num_columns] =
    {
        {1, 2, }, // row 0 0으로 자동 채워짐
        {6, 7, 8, 9, 10}, // row 1
        {11, 12, 13, 14, 15} // row 2
    };

    int zero_array[num_rows][num_columns] = { 0 };
    for (int row = 0; row < num_rows; row++ )
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << zero_array[row][col] << "\t";
        }
        cout << endl;
    }

    for (int row = 0; row < num_rows; row++ )
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << array[row][col] * 3 << "\t";
            cout << &array[row][col] << "\t";
        }
        cout << endl;
    }
    
    // array * zero_array
    for (int row = 0; row < num_rows; row++ )
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << zero_array[row][col] * array[row][col] << "\t";
        }
        cout << endl;
    }
    return 0;
}