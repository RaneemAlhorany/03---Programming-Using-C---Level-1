#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.14;
	int		radius;


	cout << "Enter the radius  value:\n";
	cin >> radius;

	cout << "the value of circle Area inscribed in a square :"<< (PI * radius * radius / 4)<<endl;


}


