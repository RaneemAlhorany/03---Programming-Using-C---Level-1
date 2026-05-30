#include <iostream>
using namespace std;

void ReadGrade(float grade[3])
{
    cout << "please enter  grade 1 ? \n";
    cin >> grade[0];

    cout << "please enter  grade 2 ? \n";
    cin >> grade[1];

    cout << "please enter  grade 3 ? \n";
    cin >> grade[2];
}

float calculateAverageOfGrade (float grade[3])
{
	return (grade[0] + grade[1] + grade[2]) / 3;

}

void printGradeandAverage(float grade[3])
{
	cout << "the grade 1 is : " << grade[0] << endl;
	cout << "the grade 2 is : " << grade[1] << endl;
	cout << "the grade 3 is : " << grade[2] << endl;
    cout << "**************************" << endl;
    cout << "the average is : "
        << calculateAverageOfGrade(grade) << endl;
}

int main()
{

    float grade[3];
    ReadGrade(grade);
    printGradeandAverage(grade);

}

