#include <iostream>
using namespace std;

struct s_infoUser 
{
    string firstName;
    string lastName;
    short age;
    string phoneNumber;
};



void readInfoCard (s_infoUser &info)
{
	cout << "Enter your first name: \n";
    cin >> info.firstName;

    cout << "Enter your last name: \n";
    cin >> info.lastName;

    cout << "Enter your age : \n";
    cin >> info.age;


    cout << "Enter your phone Number: \n";
    cin >> info.phoneNumber;
}


void printInfoCard(s_infoUser info)
{
    cout << "***************************************************" << endl;
    cout << "First Name: " << info.firstName << endl;
    cout << "Last Name: " << info.lastName << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone Number: " << info.phoneNumber << endl;
    cout << "***************************************************" << endl;
}

void readAllInfoCard(s_infoUser infoUserCard[2])
{
    readInfoCard(infoUserCard[0]);
    readInfoCard(infoUserCard[1]);

}


void printAllInfoCard(s_infoUser infoUserCard[2])
{

    printInfoCard(infoUserCard[0]);
    printInfoCard(infoUserCard[1]);
}


int main()
{
    s_infoUser infoUserCard [2];

    readAllInfoCard(infoUserCard);
    printAllInfoCard(infoUserCard);


    return (0);
}
