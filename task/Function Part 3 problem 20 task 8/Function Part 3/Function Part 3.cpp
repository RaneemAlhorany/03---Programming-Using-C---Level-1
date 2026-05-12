#include <iostream>
#include <cmath>
using namespace std;


float Circle_Area_inscribed_in_a_square(int Substitute_r)
{
    const float PI = 3.14;

    return (PI * pow(Substitute_r, 2) / 4);
}



int main()
{
    int Substitute_r;

    cout << "enter the diameter : ";
    cin >> Substitute_r;

    cout << "Circle Area inscribed in a square : " << Circle_Area_inscribed_in_a_square(Substitute_r) << endl;
}
