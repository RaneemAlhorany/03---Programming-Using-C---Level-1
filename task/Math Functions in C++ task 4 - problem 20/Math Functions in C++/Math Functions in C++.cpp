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


    area = ceil (PI *  pow(Substitute_r, 2)/4);
    cout << "Circle Area inscribed in a square : " << area <<endl;

}




