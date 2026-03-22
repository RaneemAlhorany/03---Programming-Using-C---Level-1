#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float area;
    int side_area, diameter_length;

    cout << "enter the side area : ";
    cin >> side_area;

    cout << "enter the Diameter length : ";
    cin >> diameter_length;

    area = side_area * sqrt(pow(diameter_length, 2) - pow(side_area, 2));
    cout << "rectangle Area through diagonal and side area : " << area <<endl;
}




