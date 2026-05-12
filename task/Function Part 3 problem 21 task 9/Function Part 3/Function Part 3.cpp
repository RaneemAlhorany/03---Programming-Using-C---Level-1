#include <iostream>
#include <cmath>
using namespace std;


float Circle_Area_along_the_circumference(int Substitute_r)
{
    const float PI = 3.14;

    return (pow(Substitute_r, 2) / (4 * PI));
}



int main()
{
    int Substitute_r;

    cout << "enter the diameter : ";
    cin >> Substitute_r;


    cout << "Circle Area along the circumference : " << Circle_Area_along_the_circumference(Substitute_r) << endl;
}
