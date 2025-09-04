#include <iostream>
using namespace std;
int main()
{
	int number1, number2 , temp;
	cout << "Enter the First Number:\n";
	cin >> number1;
	cout << "Enter the Second Number:\n";
	cin >> number2;

	cout << "the value of Numbers before swap:\n";
	cout << "the value of First Number : " << number1 <<endl;
	cout << "the value of Second Number : " << number2 << endl;

	temp = number1;
	number1 = number2;
	number2 = temp;

	cout << "the value of Numbers after swap:\n";
	cout << "the value of First Number : " << number1 << endl;
	cout << "the value of Second Number : " << number2 << endl;

}


