
#include <iostream>
using namespace std;



void readPass(short &pass)
{
	cout << "Enter your pass  \n";
	cin >> pass;
}


void printResult(short pass)
{

	if (pass == 1234 )
		cout << "Your Balance is : 7500"<< endl;
	else
		cout << "Wrong PIN" << endl;
}


int main()
{
	short pass; 
	readPass(pass);
	printResult(pass);
   
	return 0;
}
