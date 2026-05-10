#include <iostream>
using namespace std;

struct s_person {
    string name;
    short age;
    string city;
    string Country;
};



void print_person_info(s_person person)
{
    cout << "*****************************************" << endl;
    cout << "Name : " << person.name << "\n";
    cout << "Age : " << person.age << " years \n";
    cout << "City : " << person.city << "\n";
    cout << "Country : " << person.Country << "\n";
    cout << "*****************************************\n" << endl;
}

void print_stars()
{
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n" << endl;
}


void print()
{
    cout << "I love programming!\n" << endl;
    cout << "I promise to be the best developer ever!\n" << endl;
    cout << "I know it will take some time to practice, but i will achieve my goal.\n" << endl;
    cout << "Best Regards\n";
    cout << "Raneem Alhorany\n\n";
}


void print_H()
{
    cout << "*   *" << endl;
    cout << "*   *\n";
    cout << "*****" << endl;
    cout << "*   *\n";
    cout << "*   *\n";
	cout << "\n";
}




int main()
{
    s_person person;

    person.name = "Raneem Alhorany";
    person.age = 23;
    person.city = "Amman";
    person.Country = "Jordan";
    print_person_info(person);

    print_stars();
    
    print();

    print_H();
    return 0;
}

