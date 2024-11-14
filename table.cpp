#include <iostream>
#include <iomanip>

using namespace std;
    int main(){


	string Fnames[7] = {"Fname","pouriya" , "zahra" , "pariya", "hossein" , "ali" , "aida"};
	string Lnames[7] = {"Lname","hamedani" , "gmi" , "hamedani" , " bahrami" , "samaei" , "rasoli"};
	string id[7]={"id","4442","4443","4444","4445","4446","4447"};
	string num[7]={"number","1","2","3","4","5","6"};

	cout << "╔";
for (int j = 0; j < 4 ; j++){

cout << "═════════════╦";
}
	cout << "╗" << endl;

for (int i = 0; i < 7; i++)
{
	for ( int l = 0; l < 5; l++)
	{
		
	switch (l)
	{
	case 0: cout<< "║"<<setw(13)<<left<<num[i];
		break;
		case 1: 
		cout<< "║" << setw(12)<<left<< id[i];
	break;
	case 2:cout<< " ║" << setw(12)<<left<< Fnames[i];
	break;
	case 3: cout<< " ║" << setw(12)<< left << Lnames[i];
	break;
	case 4 : cout<< " ║" << setw(12)<<left;
	break;
	}
	}
	cout << endl;
	for (int p = 0; p < 4; p++)
	{
		cout<<"╬═════════════";
	}
	cout << "╬";
	cout << endl;	
} 

    }
	