#include <iostream>
#include <cmath>
using namespace std;


void time_in_days_hours_minutes_seconds(int seconds)
{
    int  days, hours, minutes;
    int temp;

    temp = seconds;

    days = seconds / (24 * 60 * 60);
    temp = seconds % (24 * 60 * 60);


    hours = temp / (60 * 60);
    temp = temp % (60 * 60);


    minutes = temp / 60;
    temp = temp % 60;

    seconds = temp;


    cout << "the days  : " << days << endl;
    cout << "the hours  : " << hours << endl;
    cout << "the minutes  : " << minutes << endl;
    cout << "the minutes  : " << seconds << endl;
    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;

}



int main()
{
    int seconds;
    cout << "enter the total seconds  : ";
    cin >> seconds;
    time_in_days_hours_minutes_seconds(seconds);

}
