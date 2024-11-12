#include <iostream>
#include <iomanip>

using namespace std;
    int main(){

string types[4] ={"Fname","Lname","id","num"};
	string Fnames[7] = {"Fname","pouriya" , "zahra" , "pariya", "hossein" , "ali" , "aida"};
	string Lnames[7] = {"Lname","hamedani" , "zhraie" , "hamedani" , " bahrami" , "samaei" , "rasoli"};
	int id[7]={0,4442,4443,4444,4445,4446,4447};
	int num[7]={0,2,3,4,5,6,7};

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
	case 0: cout<< "║"<<setw(13)<<left<<Fnames[i];
		break;
		case 1: 
		cout<< "║" << setw(12)<<left<< Lnames[i];
	break;
	case 2:cout<< " ║" << setw(12)<<left<< id[i];
	break;
	case 3: cout<< " ║" << setw(12)<< left << num[i];
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