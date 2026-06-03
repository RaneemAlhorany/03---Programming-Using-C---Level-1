#include <iostream>
using namespace std;


enum Month
{
	JANUARY = 1,
	FEBRUARY = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUGUST = 8,
	SEPTEMBER = 9,
	OCTOBER = 10,
	NOVEMBER = 11,
	DECEMBER = 12
};

void readMonth(short &day)
{
	cout << "Enter the number of the day \n";
	cin >> day;
}


void  printMonth(short month)
{
	if (month > 12 || month < 1)
		cout << "Invalid number for the month \n";
	else if (month == JANUARY)
		cout << "The month is January \n";
	else if (month == FEBRUARY)
		cout << "The month is February \n";
	else if (month == MARCH)
		cout << "The month is March \n";
	else if (month == APRIL)
		cout << "The month is April \n";
	else if (month == MAY)
		cout << "The month is May \n";
	else if (month == JUNE)
		cout << "The month is June \n";
	else if (month == JULY)
		cout << "The month is July \n";
	else if (month == AUGUST)
		cout << "The month is August \n";
	else if (month == SEPTEMBER)
		cout << "The month is September \n";
	else if (month == OCTOBER)
		cout << "The month is October \n";
	else if (month == NOVEMBER)
		cout << "The month is November \n";
	else if (month == DECEMBER)
		cout << "The month is December \n";	
	}



int main()
{
	short month;
	readMonth(month);
	printMonth(month);


	return 0;
    
}
