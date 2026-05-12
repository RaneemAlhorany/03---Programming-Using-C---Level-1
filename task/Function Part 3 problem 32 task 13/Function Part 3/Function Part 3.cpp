#include <iostream>
#include <cmath>
using namespace std;


int power_of_m(int Basis , int power)
{
    return (pow(Basis, power));

}



int main()
{

    int Basis, power;


    cout << "enter the Basis  : ";
    cin >> Basis;
    cout << "enter the power  : ";
    cin >> power;

    cout << "Number : " << Basis << endl;
    cout << "Number after powered: " << power_of_m(Basis , power) << endl;

}
