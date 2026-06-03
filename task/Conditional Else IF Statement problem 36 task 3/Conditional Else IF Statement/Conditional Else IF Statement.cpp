#include <iostream>
using namespace std;

struct s_number
{
	int number1;
	int number2;
	char operations;
};

enum operations
{
	ADD = '+',
	SUBTRACT = '-',
	MULTIPLY = '*',
	DIVIDE = '/',
	NONE = '0'
};


void readNumbers(s_number &number)
{
	cout << "Enter Number 1 \n";
	cin >> number.number1;
	cout << "Enter Number 2 \n";
	cin >> number.number2;
}


void readOperations(s_number& number)
{
	cout << "Enter the operation you want to perform \n";
	cout << "+ , - , * , / \n";
	cin >> number.operations;
}

char checkOperations(s_number number)
{
	if (number.operations == '+')
		return ADD;
	else if (number.operations == '-')
		return SUBTRACT;
	else if (number.operations == '*')
		return MULTIPLY;
	else if (number.operations == '/')
		return DIVIDE;
	else
		return NONE;
}



double calculateResult(s_number number)
{
	if (checkOperations(number) == ADD)
		return number.number1 + number.number2;
	else if (checkOperations(number) == SUBTRACT)
		return number.number1 - number.number2;
	else if (checkOperations(number) == MULTIPLY)
		return number.number1 * number.number2;
	else if (checkOperations(number) == DIVIDE)
		return number.number1 / number.number2;
	else
		cout << "Invalid operation \n";
	return 0;
	
		
}
void  printRessult(s_number number)
{
	cout << "The result is : " << calculateResult(number) << endl;
}



int main()
{
	s_number number;
	readNumbers(number);
	readOperations(number);
	printRessult(number);
	return 0;
    
}
