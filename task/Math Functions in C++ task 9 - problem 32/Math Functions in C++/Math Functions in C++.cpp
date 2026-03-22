#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    int Basis, result , power;


    cout << "enter the Basis  : ";
    cin >> Basis;
    cout << "enter the power  : ";
    cin >> power;


    result = round (pow(Basis, power));

    cout << "Number : " << Basis <<endl;
    cout << "Number after powered: " << result << endl;

}




