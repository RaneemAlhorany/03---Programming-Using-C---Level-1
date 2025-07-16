#include <iostream>
using namespace std;
int main()
{
	string name = "Raneem Alhorany";
	unsigned short age = 21;
	string city = "Amman";
	string country = "Jordan";
	float MonthlySalary = 75;
	char gender = 'F';
	bool isMarried = false;

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