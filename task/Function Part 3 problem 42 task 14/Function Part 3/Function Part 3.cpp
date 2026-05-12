#include <iostream>
#include <cmath>
using namespace std;


int Toutal_seconds(int days, int hours , int minutes , int seconds)
{
    return ((days * 24 * 60 * 60) +
        (hours * 60 * 60) + (minutes * 60) + seconds);

}



int main()
{

    int  days, hours, minutes, seconds;


    cout << "enter the days  : ";
    cin >> days;
    cout << "enter the hours  : ";
    cin >> hours;
    cout << "enter the minutes  : ";
    cin >> minutes;
    cout << "enter the seconds  : ";
    cin >> seconds;

    cout << "Toutal seconds: " << Toutal_seconds(days , hours , minutes , seconds) << endl;
}
