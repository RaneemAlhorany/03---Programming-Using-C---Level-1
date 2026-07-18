#include <iostream>
using namespace std;

void sumOddNumbersFromOneToN(int n)
{
    int sum = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
}


int main()
{
	int Number;

    cout << "Enter the number of times you want to print numbers from 1 to N: ";
	cin >> Number;

    sumOddNumbersFromOneToN(Number);

	return 0;
}

