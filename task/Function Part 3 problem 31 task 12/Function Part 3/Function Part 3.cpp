#include <iostream>
#include <cmath>
using namespace std;


void Number_of_power2_3_4(int number)
{
    cout << "Number : " << number << endl;
    cout << "Number of power 2: " << pow(number, 2) << endl;
    cout << "Number of power 3: " << pow(number, 3) << endl;
    cout << "Number of power 4: " << pow(number, 4) << endl;
}



int main()
{
    int number;



    cout << "enter the Number : ";
    cin >> number;

    Number_of_power2_3_4(number);

}
