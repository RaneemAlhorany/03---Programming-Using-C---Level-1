#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    int  days ,  hours, minutes , seconds;
    int result;


    cout << "enter the days  : ";
    cin >> days;
    cout << "enter the hours  : ";
    cin >> hours;
    cout << "enter the minutes  : ";
    cin >> minutes;
    cout << "enter the seconds  : ";
    cin >> seconds;
    
    result = round ((days *24*60*60) +
        (hours * 60 * 60) + (minutes * 60) + seconds);

    cout << "Toutal seconds: " << result << endl;

}




