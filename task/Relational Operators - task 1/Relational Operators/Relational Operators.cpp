#include <iostream>
using namespace std;

int main()
{
	int number_1, number_2;
	cout << "please enter the first number A?" << endl;
	cin >> number_1;
	cout << "please enter the second number B?" << endl;
	cin >> number_2;
	cout << number_1 << " = " << number_2 << " is " << (number_1 == number_2) << endl;
	cout << number_1 << " != " << number_2 << " is " << (number_1 != number_2) << endl;
	cout << number_1 << " > " << number_2 << " is " << (number_1 > number_2) << endl;
	cout << number_1 << " < " << number_2 << " is " << (number_1 < number_2) << endl;
	cout << number_1 << " >= " << number_2 << " is " << (number_1 >= number_2) << endl;
	cout << number_1 << " <= " << number_2 << " is " << (number_1 <= number_2) << endl;

}
