#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    float area;
    int radius;
    const float PI = 3.14;

    cout << "enter the Radius : ";
    cin >> radius;


    area = ceil (PI *  pow(radius, 2));
    cout << "Circle Area : " << area <<endl;

}




