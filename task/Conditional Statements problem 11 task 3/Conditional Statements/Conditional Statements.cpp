
#include <iostream>
using namespace std;



void readMark(short &mark , short order)
{
	cout << "Enter your mark " << order <<" : \n";
	cin >> mark;
}

void readAllMark(short mark[3])
{
	readMark(mark[0] , 1);
	readMark(mark[1] , 2);
	readMark(mark[2] , 3);

}

float calculateAverage(short mark[3])
{
	return (mark[0] + mark[1] + mark[2]) / 3.0;
}

void printResult(short mark[3])
{
	float average = calculateAverage(mark);
	if (average >= 50)
	{
		cout << "Your average is : " << average << endl;
		cout << "pass";
	}
	else 
	{
		cout << "Your average is : " << average << endl;
		cout << "fail";
	}
}


int main()
{
	short mark [3]; 
	readAllMark(mark);
	printResult(mark);
   
	return 0;
}
