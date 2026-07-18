#include <iostream>
using namespace std;

void printNumberFromOneToN(int n)
{
    for (int i = 1 ; i <= n ; i ++)
    {
        cout << i << endl;
    }

}


int main()
{
	int number_of_times;

    cout << "Enter the number of times you want to print numbers from 1 to N: ";
	cin >> number_of_times;

    printNumberFromOneToN(number_of_times);

	return 0;
}

