#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    float area , Area_of_a_Triangle , semi_perimeter;
    int side_triangle_1, side_triangle_2 , side_triangle_3;
    const float PI = 3.14;


    cout << "enter the side triangle 1 : ";
    cin >> side_triangle_1;

    cout << "enter the side triangle 2 : ";
    cin >> side_triangle_2;

    cout << "enter the side triangle 3 : ";
    cin >> side_triangle_3;


    semi_perimeter = (side_triangle_1 + side_triangle_2 + side_triangle_3) / 2;
    Area_of_a_Triangle = sqrt(semi_perimeter * (semi_perimeter - side_triangle_1) * (semi_perimeter - side_triangle_2) * (semi_perimeter - side_triangle_3));

    area = round (PI * pow(((side_triangle_1 * side_triangle_2 * side_triangle_3) / (4 * Area_of_a_Triangle)), 2));
    cout << "Circle Area circle Described Around an Arbitrary triangle : " << area <<endl;

}




