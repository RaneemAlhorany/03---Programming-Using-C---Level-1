#include <iostream>
using namespace std;


void sawp_and_print (int num1 , int num2)
{
	int temp;

	cout << "the value of number 1 before sawp = " << num1 << endl;
	cout << "the value of number 2 before sawp = " << num2 << endl;
	
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "the value of number 1 after sawp = " << num1 << endl;
	cout << "the value of number 2 after sawp = " << num2 << endl;
}



int main()
{
    int number_1, number_2;

	cout << "Enter the first number: ";
	cin >> number_1;
	cout << "Enter the second number: ";
	cin >> number_2;

	sawp_and_print(number_1, number_2);
    return (0);
}
