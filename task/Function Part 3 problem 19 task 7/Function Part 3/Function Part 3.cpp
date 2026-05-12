#include <iostream>
#include <cmath>
using namespace std;


float Circle_Area_through_diameter(int diameter)
{
    const float PI = 3.14;

    return (PI * pow(diameter, 2) / 4);
}



int main()
{
    int diameter;

    cout << "enter the diameter : ";
    cin >> diameter;

    cout << "Circle Area through diameter : " << Circle_Area_through_diameter(diameter) << endl;
}
