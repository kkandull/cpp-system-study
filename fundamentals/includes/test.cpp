#include <iostream>

using namespace std;

int dos(int x)
{
    int result = 0;
    if ( x % 2 == 0)
    {
        result = 1;
    }
    return result;
}
int main() {
    int x = 0;
    cin >> x;
    cout << x << endl;
    cout << dos(x) << endl;

    return 0;

} 
