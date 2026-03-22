#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    float area;
    int Substitute_r;
    const float PI = 3.14;

    cout << "enter the diameter : ";
    cin >> Substitute_r;


    area = floor (pow(Substitute_r, 2)/ (4 * PI));
    cout << "Circle Area along the circumference : " << area <<endl;

}




