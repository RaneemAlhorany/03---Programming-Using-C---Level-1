
#include <iostream>
using namespace std;

void readData(short &age ,  bool &driver_license)
{
	cout << "Enter your age: \n";
	cin >> age;
	cout << "Do you have a driver's license? (1 for yes, 0 for no): \n";
	cin >> driver_license;
}

void printResult(short age , bool driver_license)
{
	if (age > 21 && driver_license)
		cout << "Hired";
	else
		cout << "Rejected";
}


int main()
{
	short age; 
	bool driver_license;
	readData(age , driver_license);
	printResult(age, driver_license);
   
}
