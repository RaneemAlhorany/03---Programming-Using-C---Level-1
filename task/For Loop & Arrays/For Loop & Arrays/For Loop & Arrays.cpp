#include <iostream>
using namespace std;

struct s_infoUser
{
    string firstName;
    string lastName;
    short age;
    string phoneNumber;
};


void readNumberOfUsers(int& len)
{
	cout << "Enter the number of users (max 100): ";
	cin >> len;
}


void readInfoCard(s_infoUser& info)
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



void readAllInfoCard(s_infoUser infoUserCard[100], int len)
{
    for (int i = 0; i < len; i++)
    {
		cout << "Enter information for user " << i + 1 << ":\n";
        readInfoCard(infoUserCard[i]);
    }
}


void printAllInfoCard(s_infoUser infoUserCard[100], int len)
{
    for (int i = 0; i < len; i++)
    {
		cout << "Information for user " << i + 1 << ":\n";
        printInfoCard(infoUserCard[i]);
    }
}


int main()
{
    s_infoUser infoUserCard[100];
    int len;

	readNumberOfUsers(len);

    readAllInfoCard(infoUserCard , len);
    printAllInfoCard(infoUserCard , len);


    return (0);
}

