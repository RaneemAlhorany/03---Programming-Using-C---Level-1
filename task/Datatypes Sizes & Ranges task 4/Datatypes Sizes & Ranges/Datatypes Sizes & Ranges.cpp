#include <iostream>
using namespace std;
int main()
{

	string name;
	unsigned short age;
	string city;
	string country;
	float MonthlySalary;
	char gender;
	bool isMarried;

	cout << "please enter your name:" << endl;
	cin >> name;

	cout << "please enter your age:" << endl;
	cin >> age;

	cout << "please enter your city:" << endl;
	cin >> city;

	cout << "please enter your country:" << endl;
	cin >> country;

	cout << "please enter your MonthlySalary:" << endl;
	cin >> MonthlySalary;

	cout << "please enter your gender (f/m):" << endl;
	cin >> gender;

	cout << "please enter your isMarried (0/1):" << endl;
	cin >> isMarried;


	cout << "********************************************\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << " years" << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary : " << MonthlySalary << endl;
	cout << "Yearly Salary : " << MonthlySalary * 12 << endl;
	cout << "Gender : " << gender << endl;
	cout << "Married : " << isMarried << endl;
	cout << "********************************************\n";
}