#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    float area;
    int diameter;
    const float PI = 3.14;

    cout << "enter the diameter : ";
    cin >> diameter;


    area = ceil (PI *  pow(diameter, 2)/4);
    cout << "Circle Area through diameter : " << area <<endl;

}




