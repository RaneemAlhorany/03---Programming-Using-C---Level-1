#include <iostream>
using namespace std;

struct contact_information 
{
	string phone;
	string email;
	string facebook;

};

struct Address 
{
	string street;
	string postalCode;
};

struct Person
{
	string name;
	int age;
	string city ;
	string country ;
	float MonthlySalary;
	char gender ;
	bool isMarried;
	Address address;
	contact_information contact_information;
};

int main()
{
	Person main_character;

	main_character.name = "Raneem Alhorany";
	main_character.age = 21;
	main_character.city = "Amman";
	main_character.country = "Jordan";
	main_character.MonthlySalary = 75;
	main_character.gender = 'F';
	main_character.isMarried = false;
	main_character.address.postalCode = "20494";
	main_character.address.street = "jabal taj";

	main_character.contact_information.email = "raneemalhorany174@gmail.com";
	main_character.contact_information.facebook = "Raneem Alhorany";
	main_character.contact_information.phone = "0790000000";

    std::cout << "Hello World!\n";
	cout << "********************************************\n";
	cout << "Name: " << main_character.name << endl;
	cout << "Age: " << main_character.age << " years" << endl;

	cout << "email: " << main_character.contact_information.email << endl;
	cout << "facebook: " << main_character.contact_information.facebook << endl;
	cout << "phone: " << main_character.contact_information.phone << endl;

	cout << "City: " << main_character.city << endl;
	cout << "Country: " << main_character.country << endl;
	cout << "postalCode: " << main_character.address.postalCode << endl;
	cout << "street: " << main_character.address.street << endl;
	cout << "Monthly Salary : " << main_character.MonthlySalary << endl;
	cout << "Yearly Salary : " << main_character.MonthlySalary * 12 << endl;
	cout << "Gender : " << main_character.gender << endl;
	cout << "Married : " << main_character.isMarried << endl;
	cout << "********************************************\n";
}
