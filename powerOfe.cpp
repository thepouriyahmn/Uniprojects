#include <iostream>
#include <iomanip>
using namespace std;
// #include <conio.h>//
float powerr(int a, float b)
{

    float result1 = 1;

    for (int i = 0; i < a; i++)
    {

        result1 = result1 * b;
    }

    return result1;
}

float fac(float c)
{
    float result = 1;

    for (int i = c; i > 0; i--)
    {
        result = i * result;
    }
    return result;
}
int main()
{

    int x;
    float res = 0;
    cout << "e in power of :";
    cin >> x;
    cout << "eⁿ = 1";
    for (int i = 1; i < 10; i++)
    {
        cout << " + " << powerr(i, x) << '/' << fac(i);
        res += powerr(i, x) / fac(i);
    }
    cout << " = " << res;
}