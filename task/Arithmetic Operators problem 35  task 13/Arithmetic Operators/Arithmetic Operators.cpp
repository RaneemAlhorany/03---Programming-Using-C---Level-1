#include <iostream>
using namespace std;
int main()
{
	short Pennies, Nickels, Dimes, Quarters, Dollars;
	float total_Pennies, total_Dollars;
	cout << "enter number of Pennies\n";
	cin  >> Pennies;
	cout << "enter number of Nickels\n";
	cin  >> Nickels;
	cout << "enter number of Dimes\n";
	cin  >> Dimes;
	cout << "enter number of Quarters\n";
	cin  >> Quarters;
	cout << "enter number of Dollars\n";
	cin >> Dollars;

	total_Pennies = Pennies + (Nickels *5)  + (Dimes*10) + (Quarters *25) + (Dollars*100);
	total_Dollars = total_Pennies / 100;

	cout << total_Pennies << " Pennies \n" << total_Dollars  << " Dollars \n";



}


