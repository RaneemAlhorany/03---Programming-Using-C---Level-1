#include <iostream>
using namespace std;

void factorila(int n)
{
	int result = 1;
	for (int i = n; i > 0; i--)
	{
		result *= i;
	}
	cout << "Factorial of " << n << " is: " << result << endl;
}


int main()
{
	int number_of_times;

    cout << "Enter the number for which you want to calculate factorial: ";
	cin >> number_of_times;

	factorila(number_of_times);

	return 0;
}

