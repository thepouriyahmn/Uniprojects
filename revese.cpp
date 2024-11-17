#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;

    for (int j = 0; i > 0; i = i / 10)
    {
        j = i % 10;
        cout << j;
    }
}