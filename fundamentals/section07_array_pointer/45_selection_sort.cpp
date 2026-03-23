// Section 6 - 6.4 ~ 6.7
// Focus: array and pointer

#include <iostream>
using namespace std;

void printArray(const int array[], const int length)
{   
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
    
}
int main() 
{

    
    const int length = 5;

    int array[length] = { 3, 5, 2, 1, 4};

    printArray(array, length);

    for (int i = 0; i < length-1; i++) 
    {
        int smallIndex = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[smallIndex] > array[j])
            {
                smallIndex = j;
            }
        }
        int temp = array[smallIndex];
        array[smallIndex] = array[i];
        array[i] = temp;
    }
    printArray(array, length);
    return 0;
}