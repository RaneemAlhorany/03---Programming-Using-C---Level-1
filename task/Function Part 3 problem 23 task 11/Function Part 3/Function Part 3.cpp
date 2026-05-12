#include <iostream>
#include <cmath>
using namespace std;


float Circle_Area_circle_Described_Around_an_Arbitrary_triangle(int side_triangle_1, int side_triangle_2 , int side_triangle_3)
{
    const float PI = 3.14;
    float  Area_of_a_Triangle, semi_perimeter;



    semi_perimeter = (side_triangle_1 + side_triangle_2 + side_triangle_3) / 2;
    Area_of_a_Triangle = sqrt(semi_perimeter * (semi_perimeter - side_triangle_1) * (semi_perimeter - side_triangle_2) * (semi_perimeter - side_triangle_3));


    return (PI * pow(((side_triangle_1 * side_triangle_2 * side_triangle_3) / (4 * Area_of_a_Triangle)), 2));
}



int main()
{
    int side_triangle_1, side_triangle_2, side_triangle_3;
    const float PI = 3.14;


    cout << "enter the side triangle 1 : ";
    cin >> side_triangle_1;

    cout << "enter the side triangle 2 : ";
    cin >> side_triangle_2;

    cout << "enter the side triangle 3 : ";
    cin >> side_triangle_3;


    cout << "Circle Area circle Described Around an Arbitrary triangle : " << 
        Circle_Area_circle_Described_Around_an_Arbitrary_triangle(side_triangle_1, side_triangle_2, side_triangle_3) << endl;

}
