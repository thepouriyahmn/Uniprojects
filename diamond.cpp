#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    for (int i = 1; i < 9; i = i + 2)
    {
        cout << setw(9 - i);
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 8; i > 0; i = i - 2)
    {
        cout << setw(12 - i);
        for (int j = 4; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}