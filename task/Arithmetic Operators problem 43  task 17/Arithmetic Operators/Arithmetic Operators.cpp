#include <iostream>
using namespace std;
int main()
{
	int day, hours, minutes, secound;
	long Total_secound;

	cout << "enter the number of secound: \n";
	cin >> Total_secound;

	day = Total_secound / (60 * 60 * 24);
	Total_secound = Total_secound % (60 * 60 * 24);


	hours = Total_secound / (60 * 60);
	Total_secound = Total_secound % (60 * 60);


	 minutes = Total_secound / 60;
	 Total_secound = Total_secound % 60;

	 secound = Total_secound;
	
	cout << "the total number of day     : " << day << endl;
	cout << "the total number of hours   : " << hours << endl;
	cout << "the total number of minutes : " << minutes << endl;
	cout << "the total number of secound : " << secound << endl;
	cout << day << ":" << hours << ":" << minutes << ":" << secound << endl;

	







}


