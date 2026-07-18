#include <iostream>
using namespace std;


void printAlphabets_capital()
{
	for (char c = 'A'; c <= 'Z'; c++)
	{
		cout << c << endl;
	}
}

void printAlphabets_small()
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		cout << c << endl;
	}
}

int main()
{
	cout << "the capital alphabets are:" << endl;
	printAlphabets_capital();
	cout << "the small alphabets are:" << endl;
	printAlphabets_small();

	return 0;
}

