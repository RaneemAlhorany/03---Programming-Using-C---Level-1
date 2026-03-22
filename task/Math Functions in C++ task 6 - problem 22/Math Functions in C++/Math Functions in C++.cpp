#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    float area;
    int minor_axis , major_axis;
    const float PI = 3.14;


    cout << "enter the Semi - major axis : ";
    cin >> major_axis;

    cout << "enter the Semi - minor axis : ";
    cin >> minor_axis;


    area = floor (PI * pow(minor_axis, 2) / 4 * ((2.0 * major_axis - minor_axis) / (2.0 * major_axis + minor_axis)));
    cout << "Circle Area Inscribed in an isosceles Triangle : " << area <<endl;

}




