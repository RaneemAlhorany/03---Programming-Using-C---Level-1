#include <iostream>
using namespace std;

struct s_person
{
	string name;
	short age;
	string city;
	string country;
	float MonthlySalary;
	char gender;
	bool isMarried;
};

void readPersonData(s_person &person)
{
	cout << "Enter name: ";
	cin >> person.name;
	cout << "Enter age: ";
	cin >> person.age;
	cout << "Enter city: ";
	cin >> person.city;
	cout << "Enter country: ";
	cin >> person.country;
	cout << "Enter monthly salary: ";
	cin >> person.MonthlySalary;
	cout << "Enter gender (M/F): ";
	cin >> person.gender;
	cout << "Is married (1 for yes, 0 for no): ";
	cin >> person.isMarried;
}

void displayPersonData(const s_person person)
{
	cout << "********************************************\n";
	cout << "Name : " << person.name << endl;
	cout << "Age : " << person.age << " years" << endl;
	cout << "City : " << person.city << endl;
	cout << "Country : " << person.country << endl;
	cout << "Monthly Salary : " << person.MonthlySalary << endl;
	cout << "Yearly Salary : " << person.MonthlySalary * 12 << endl;
	cout << "Gender : " << person.gender << endl;
	cout << "Married : " << person.isMarried << endl;
	cout << "********************************************\n";
}

int main()
{
	s_person person1, person2;
	readPersonData(person1);
	displayPersonData(person1);

	readPersonData(person2);
	displayPersonData(person2);
	return 0;
}

