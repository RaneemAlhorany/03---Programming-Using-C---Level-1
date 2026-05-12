#include <iostream>
#include <cmath>
using namespace std;


float Circle_Area_Inscribed_in_an_isosceles_Triangle(int minor_axis , int major_axis)
{
    const float PI = 3.14;

    return (PI * pow(minor_axis, 2) / 4 * ((2.0 * major_axis - minor_axis) / (2.0 * major_axis + minor_axis)));
}



int main()
{
    int minor_axis, major_axis;


    cout << "enter the Semi - major axis : ";
    cin >> major_axis;

    cout << "enter the Semi - minor axis : ";
    cin >> minor_axis;


    cout << "Circle Area Inscribed in an isosceles Triangle : " << 
        Circle_Area_Inscribed_in_an_isosceles_Triangle  (minor_axis , major_axis)<< endl;

}
