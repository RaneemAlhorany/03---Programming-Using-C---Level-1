#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    int number;
    int numOfPower2, numOfPower3, numOfPower4;



    cout << "enter the Number : ";
    cin >> number;
    numOfPower2 = round (pow(number, 2));
    numOfPower3 = round (pow (number , 3));
    numOfPower4 = round (pow(number, 4));


    cout << "Number : " << number <<endl;
    cout << "Number of power 2: " << numOfPower2 << endl;
    cout << "Number of power 3: " << numOfPower3 << endl;
    cout << "Number of power 4: " << numOfPower4 << endl;


}




