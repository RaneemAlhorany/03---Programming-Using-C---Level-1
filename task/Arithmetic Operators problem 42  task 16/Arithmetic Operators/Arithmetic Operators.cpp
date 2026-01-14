#include <iostream>
using namespace std;
int main()
{
	int day, hours, minutes, secound;
	long result = 0;

	cout << "enter the number of day: \n";
	cin >> day;
	result += day * 24 * 60 * 60;
	cout << "enter the number of hours: \n";
	cin >> hours;
	result +=  hours  * 60 * 60;
	cout << "enter the number of minutes: \n";
	cin >> minutes;
	result += minutes  * 60;
	cout << "enter the number of secound: \n";
	cin >> secound;
	result += secound;
	
	cout << "the total number of secound : " << result << endl;

	







}


