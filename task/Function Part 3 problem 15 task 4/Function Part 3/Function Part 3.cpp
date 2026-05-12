#include <iostream>
using namespace std;


int Rectangle_Area(int width, int height)
{
	return (width * height);
}



int main()
{
	int		width, height;

	cout << "Enter the width value:\n";
	cin >> width;
	cout << "Enter the height value:\n";
	cin >> height;

	cout << "the value of Rectangle Area :" << Rectangle_Area(width , height) << endl;
    return (0);
}
