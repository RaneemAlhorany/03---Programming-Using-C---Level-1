#include <iostream>
using namespace std;

void power_of_m(int base , int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	cout << base << " raised to the power of " << exponent << " is: " << result << endl;
}

int main()
{
	int base;
	int exponent;

    cout << "Enter the base: ";
	cin >> base;
    cout << "Enter the exponent: ";
	cin >> exponent;

	power_of_m(base, exponent);

	return 0;
}

