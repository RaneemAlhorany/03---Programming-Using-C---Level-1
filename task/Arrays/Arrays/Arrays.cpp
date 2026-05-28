#include <iostream>
using namespace std;

int main()
{
	float grades[3];

	cout << "please Enter Grade 1 ? \n";
	cin >> grades[0];

	cout << "please Enter Grade 2 ? \n";
	cin >> grades[1];


	cout << "please Enter Grade 3 ? \n";
	cin >> grades[2];


	cout << "-----------------------------\n";
	cout << "the average of grades is " 
		<< (grades[0] + grades[1] + grades[2]) / 3 << endl;
}

