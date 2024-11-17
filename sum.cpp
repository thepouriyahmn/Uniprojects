#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, avg;
    for (int i = 0; i < 10; i++)
    {
        cout << "inter num" << endl;
        cin >> num;
        sum = sum + num;
    }
    cout << "jam=" << sum << endl;
    avg = sum / 10;
    cout << "the average is " << avg << endl;
}