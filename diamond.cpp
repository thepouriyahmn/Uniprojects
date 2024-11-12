#include <iostream>
#include <iomanip>
using namespace std;
int main(){

     for (int i = 1; i < 9; i= i+2)
    {
        cout << setw(9-i);
                for (int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << endl;
                
    }
    for ( int i = 10; i > 2; i=i-2)
    {
        cout <<setw(14-i);
        for ( int j = 5; j < i; j++)
        {
            cout<<"* ";
        }
        cout << endl;
        
    }
    
}