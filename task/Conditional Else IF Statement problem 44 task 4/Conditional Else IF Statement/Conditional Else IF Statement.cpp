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


void readDay(short &day)
{
	cout << "Enter the number of the day \n";
	cin >> day;
}


void  printDay(short day)
{
	if (day > 7 || day < 1)
		cout << "Invalid number for the day \n";
	else if (day == SUNDAY)
		cout << "The day is Sunday \n";
	else if (day == MONDAY)
		cout << "The day is Monday \n";
	else if (day == TUESDAY)
		cout << "The day is Tuesday \n";
	else if (day == WEDNESDAY)
		cout << "The day is Wednesday \n";
	else if (day == THURSDAY)
		cout << "The day is Thursday \n";
	else if (day == FRIDAY)
		cout << "The day is Friday \n";
	else if (day == SATURDAY)
		cout << "The day is Saturday \n";
	}



int main()
{
	short day;
	readDay(day);
	printDay(day);
	return 0;
    
}
