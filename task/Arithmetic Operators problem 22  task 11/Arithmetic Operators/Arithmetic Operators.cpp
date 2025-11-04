#include <iostream>
using namespace std;
int main()
{

	float  Base, Leg_length, Area;
	const float PI = 3.14;
	cout << "calculate circle Area Inscribed in an Isosceles Triangle:" << "\n";
	cout << "Enter  the Leg length" << "\n";
	cin >> Leg_length;
	cout << "Enter  the Base" << "\n";
	cin >> Base;
	Area = (PI *  (Base * Base) / 4) * ( (2 * Leg_length - Base) / (2 * Leg_length + Base));
	cout << "calculate circle Area Inscribed in an Isosceles Triangle: " << Area << endl;








}


