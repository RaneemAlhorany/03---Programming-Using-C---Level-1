#include <iostream>
using namespace std;

void sumEvenNumbersFromOneToN(int n)
{
    int sum = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;
}


int main()
{
	int number;

    cout << "Enter the number to get the sum of even numbers: ";
	cin >> number;

    sumEvenNumbersFromOneToN(number);

	return 0;
}

