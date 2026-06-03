#include <iostream>
using namespace std;

void  printGrade(short grade)
{
    if (grade >= 90 && grade <= 100)
        cout << "A \n";
    else if (grade >= 80 && grade < 90)
        cout << "B \n";
    else if (grade >= 70 && grade < 80)
        cout << "C \n";
    else if (grade >= 60 && grade < 70)
        cout << "D \n";
    else if (grade >= 50 && grade < 60)
        cout << "E \n";
    else 
        cout << "F \n";
}


void reeadGrade(short &grade)
{
	cout << "Enter your grade: \n";
	cin >> grade;
}

int main()
{
    short grade;
	reeadGrade(grade);
	printGrade(grade);

	return 0;
    
}
