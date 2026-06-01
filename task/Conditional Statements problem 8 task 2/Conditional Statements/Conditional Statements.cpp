
#include <iostream>
using namespace std;

void readMark(short &mark)
{
	cout << "Enter your mark: \n";
	cin >> mark;
}

void printResult(short mark)
{
	if (mark >= 50)
		cout << "pass";
	else
		cout << "fail";
}


int main()
{
	short mark; 
	readMark(mark);
	printResult(mark);
   
	return 0;
}
