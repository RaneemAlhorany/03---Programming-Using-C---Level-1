#include <iostream>
#include <cmath>
using namespace std;


float rectangle_Area_through_diagonal(int side_area, int diameter_length)
{
    return (side_area * sqrt(pow(diameter_length, 2) - pow(side_area, 2)));
}



int main()
{
    int side_area, diameter_length;

    cout << "enter the side area : ";
    cin >> side_area;

    cout << "enter the Diameter length : ";
    cin >> diameter_length;

    cout << "rectangle Area through diagonal and side area : " 
        << rectangle_Area_through_diagonal(side_area, diameter_length) << endl;
}
