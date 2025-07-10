#include <iostream>
using namespace std;

int main()
{

	int number1, number2 , number3 ;
	int summation_3_number;

	cout << "enter the first number:" << endl;
	cin >> number1;

	cout << "enter the second number:" << endl;
	cin >> number2;

	cout << "enter the third number:" << endl;
	cin >> number3;
	
	summation_3_number = number1 + number2 + number3;


	cout << number1 << "+ " << endl;
	cout << number2 << "+ " << endl;
	cout << number3 << endl;
	cout << "------------------------------------\n";
	cout << summation_3_number;
}

