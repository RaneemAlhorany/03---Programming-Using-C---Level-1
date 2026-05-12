#include <iostream>
#include <cmath>
using namespace std;


float Circle_Area(int radius)
{
    const float PI = 3.14;

    return (PI * pow(radius, 2));
}



int main()
{
    int radius;
   

    cout << "enter the Radius : ";
    cin >> radius;


    cout << "Circle Area : " << Circle_Area(radius) << endl;
}
