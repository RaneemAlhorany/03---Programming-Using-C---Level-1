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

void readMonth(short& day)
{
	cout << "Enter the number of the day \n";
	cin >> day;
}


void  printMonth(short month)
{
	switch (month)
	{
		case Month::JANUARY :
			cout << "The month is January \n";
			break;
		case Month::FEBRUARY:
			cout << "The month is February \n";
			break;
		case Month::MARCH:
			cout << "The month is March \n";
			break;
		case Month::APRIL:
			cout << "The month is April \n";
			break;
		case Month::MAY:
			cout << "The month is May \n";
			break;
		case Month::JUNE:
			cout << "The month is June \n";
			break;
		case Month::JULY:
			cout << "The month is July \n";
			break;
		case Month::AUGUST:
			cout << "The month is August \n";
			break;
		case Month::SEPTEMBER:
			cout << "The month is September \n";
			break;
		case Month::OCTOBER:
			cout << "The month is October \n";
			break;
		case Month::NOVEMBER:
			cout << "The month is November \n";
			break;
		case Month::DECEMBER:
			cout << "The month is December \n";
			break;
		default:
			cout << "Invalid number for the month \n";
	}
}



int main()
{
	short month;
	readMonth(month);
	printMonth(month);


	return 0;

}
