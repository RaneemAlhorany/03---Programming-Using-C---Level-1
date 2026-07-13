#include <iostream>
using namespace std;

enum day
{
	SUNDAY = 1,
	MONDAY = 2,
	TUESDAY = 3,
	WEDNESDAY = 4,
	THURSDAY = 5,
	FRIDAY = 6,
	SATURDAY = 7
};


void readDay(short& day)
{
	cout << "Enter the number of the day \n";
	cin >> day;
}


void  printDay(short day)
{
	switch (day)
	{
		case day::SUNDAY:
			cout << "The day is Sunday \n";
			break;
		case day::MONDAY:
			cout << "The day is Monday \n";
			break;
		case day::TUESDAY:
			cout << "The day is Tuesday \n";
			break;
		case day::WEDNESDAY:
			cout << "The day is Wednesday \n";
			break;
		case day::THURSDAY:
			cout << "The day is Thursday \n";
			break;
		case day::FRIDAY:
			cout << "The day is Friday \n";
			break;
		case day::SATURDAY:
			cout << "The day is Saturday \n";
			break;
		default:
			cout << "Invalid number for the day \n";
	}
}



int main()
{
	short day;
	readDay(day);
	printDay(day);
	return 0;

}