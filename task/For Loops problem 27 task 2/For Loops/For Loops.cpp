#include <iostream>
using namespace std;

void printNumberFromNToOne(int n)
{
    for (int i = n ; i > 0 ; i--)
    {
        cout << i << endl;
    }

}


int main()
{
	int number_of_times;

    cout << "Enter the number of times you want to print numbers from N to 1: ";
	cin >> number_of_times;

    printNumberFromNToOne(number_of_times);

	return 0;
}

