
#include <iostream>
using namespace std;



void readAge(short &age)
{
	cout << "Enter your age  \n";
	cin >> age;
}


void printResult(short age)
{

	if (age >= 18 && age <= 45)
		cout << "Valid Age"<< endl;
	else
		cout << "Invalid Age" << endl;
}


int main()
{
	short age; 
	readAge(age);
	printResult(age);
   
	return 0;
}
